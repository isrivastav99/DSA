#include<bits/stdc++.h>
using namespace std;
int N,M;
bool ans = false;
void DFS(list<int> *adj, bool* visited,int sp, int count){
    visited[sp] = true;
    
    for(auto it = adj[sp].begin();it!=adj[sp].end();it++){
        if(!visited[*it])
            DFS(adj,visited,*it,count+1);
    }
    if(count == N){
        cout<<sp<<"yes"<<endl;
        ans = true;
    }
        
    visited[sp] = false;
    
}
int Hamiltonian(list<int> *adj){
    bool* visited = new bool[N+1];
    for(int i = 1;i<=N;i++)
        visited[i] = false;
        
    for(int i = 1;i<=N;i++)  {
         DFS(adj,visited,i,1);
    } 
    return ans?1:0;
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    cin>>N>>M;
	    list<int> adj[N+1];
	    for(int i = 0;i<M;i++){
	        int u,v;
	        cin>>u>>v;
	        adj[u].push_back(v);
	        adj[v].push_back(u);
	    }
	    cout<<Hamiltonian(adj)<<endl;
	}
	return 0;
}