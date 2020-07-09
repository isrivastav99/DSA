#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,e;
	cin>>n>>e;
	unordered_map<int, vector<int>> m, mr;
	for(int i = 0;i<e;i++){
		int f, s;
		cin>>f>>s;
		m[f-1].push_back(s-1);
		mr[s-1].push_back(f-1);
	}

	bool* vis = new bool[n];
	for(int i = 0;i<n;i++){
		vis[i] = false;
	}

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	pq.push({0,0});
	int ans = -1;
	while(!pq.empty()){
		int rev = pq.top().first;
		int v = pq.top().second;
		pq.pop();
		if(vis[v])
			continue;
		if(v == n-1){
			ans = rev;
			break;
		}
		vis[v] = true;
		if(m.find(v) == m.end()){
			for(auto child : mr[v]){
				if(!vis[child])
					pq.push({rev+1,child});
			}
		}
		else{
			for(auto child : m[v]){
				if(!vis[child])
					pq.push({rev,child});
			}
		}
	}
	cout<<ans;
}