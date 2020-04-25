#include<bits/stdc++.h>
using namespace std;
bool checkapal(string s){
	int n = s.size();
	unordered_map<char, int> m;
	for(int i=0;i<n;i++){
		m[s[i]]++;
	}
	bool oddcheck = false;
	for(auto it = m.begin();it!=m.end();it++){
		if(it->second%2 !=0 && !oddcheck)
			oddcheck = true;
		else if(it->second%2!=0 && oddcheck)
			return false;
	}
	return true;
}
int main(){
	string s;
	cin>>s;
	cout<<checkapal(s);
}