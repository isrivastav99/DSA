#include<bits/stdc++.h>
using namespace std;
#define V 9 
int m(int* distance, bool* visited){
	int m, md = INT_MAX;
	for(int i = 0;i<V;i++){
		if(!visited[i] && distance[i]<=md){
			md = distance[i];
			m = i;
		}
	}
	return m;
}
void printSolution(int distance[V]) 
{ 
    printf("Vertex \t\t Distance from Source\n"); 
    for (int i = 0; i < V; i++) 
        printf("%d \t\t %d\n", i, distance[i]); 
} 
void dijkstra(int graph[V][V], int src){
	int* distance = new int[V];
	bool* visited = new bool[V];
	for(int i = 0;i<V;i++){
		distance[i] = INT_MAX;
		visited[i] = false;
	}
	distance[src] = 0;
	for(int i = 0;i<V-1;i++){
		int u = m(distance, visited);
		visited[u] = true;

		for(int j = 0;j<V;j++){
			if(!visited[j] && graph[u][j]!= 0 && distance[u]!= INT_MAX && distance[u] + graph[u][j] < distance[j] )
				distance[j] = distance[u] + graph[u][j];
		}
	}

	printSolution(distance); 
}
int main(){
	int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 }, 
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 }, 
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 }, 
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 }, 
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 }, 
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 }, 
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 }, 
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 }, 
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } }; 
    dijkstra(graph, 0);
}