#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#define MAX_VERTICES 50

typedef struct Graph_t{
    int V;
    bool adj[MAX_VERTICES][MAX_VERTICES];
}Graph;

//constructor
Graph* Graph_create(int V){
    Graph* g= malloc(sizeof(Graph));
    g->V=V;
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            g->adj[i][j]=false;
        }
    }

    return g;
}

//destructor
void Graph_destroy(Graph * g){
    free(g);
}

//function to add an edge to graph
void Graph_add_edge(Graph *g,int v,int w){
    g->adj[v][w]=true;
}

//print BFS traversal from a given source s
void Graph_BFS(Graph *g,int s){
    bool visited[MAX_VERTICES];
    for(int i=0;i<g->V;i++){
        visited[i]=false;
    }
    //create queue for BFS
    int queue[MAX_VERTICES];
    int front=0,rear=0;
    //mark the current node as visited and enqueue it
    visited[s]=true;
    queue[++rear]=s;
    while(front!=rear){
        s=queue[front++];
        printf("%d  ",s);
        for(int adjacent=0;adjacent<g->V;adjacent++){
            if(g->adj[s][adjacent] && !visited[adjacent]){
                 visited[adjacent]=true;
                 queue[rear++]=adjacent;
            }
        }
    }
}

int main(){
    Graph *g=Graph_create(4);
    Graph_add_edge(g,0,1);
    Graph_add_edge(g,0,2);
    Graph_add_edge(g,1,2);
    Graph_add_edge(g,2,0);
    Graph_add_edge(g,2,3);
    Graph_add_edge(g,3,3);
    printf("BFS traversal\n");
    Graph_BFS(g,2);
    Graph_destroy(g);


    return 0;
}