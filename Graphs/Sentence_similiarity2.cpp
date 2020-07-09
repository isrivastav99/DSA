#include<bits/stdc++.h>
using namespace std;
unordered_map<string,string> par;
unordered_map<string,int> rank;
string find(string v){
	if(v == par[v])
		return v;

	string pv = find(par[v]);
	par[v] = pv;
	return pv;
}
void UnionDSU(string x, string y){
	string px = x, py = y;
	if(par.find(x) == par.end()){
		par[x] = x;
		rank[px] = 1;
	}
	else
		px = find(x);
	if(par.find(y) == par.end()){
		par[y] = y;
		rank[py] = 1;
	}
	else
		py = find(y);	

	if(px != py){
		if(rank[px]<rank[py])
			par[px] = py;
		else if(rank[px]>rank[py])
			par[py] = px;
		else{
			par[px] = py;
			rank[py]++;
		}
	}
}
int main(){
	int n,m;
	cin>>n>>m;
	vector<string> words1, words2;
	for(int i = 0;i<n;i++){
		string w;
		cin>>w;
		words1.push_back(w);
	}
	for(int i = 0;i<n;i++){
		string w;
		cin>>w;
		words2.push_back(w);
	}
	vector<pair<string,string>> p;
	for(int i = 0;i<m;i++){
		string t1,t2;
		cin>>t1>>t2;
		p.push_back({t1,t2});
		UnionDSU(t1,t2);
	}
	bool ans = true;
	for(int i = 0;i<n;i++){
		if(par.find(words1[i]) != par.end()&&par.find(words2[i]) != par.end() && par[words1[i]] == par[words2[i]])
			ans = ans&true;
		else
			ans = ans&false;
	}
	cout<<ans<<endl;
}