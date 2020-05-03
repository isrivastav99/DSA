#include<iostream>
#include<unordered_map>
using namespace std;
int lsr(string s){
	unordered_map<char, int> m;
	int si= 0, ei = 0, ans = 0;
	while(ei<s.size()){
		if(m.find(s[ei])!=m.end()){
			ans = max(ans,ei-si);
			while(si <= m[s[ei]]){
				m.erase(s[si]);
				si++;
			}
			m[s[ei]] = ei;
			ei++;
		}
		else{
			m[s[ei]] = ei;
			ei++;
		}
	}
	ans = max(ans, ei-si);
	return ans;
}
int main(){
	string s;
	cin>>s;
	cout<<lsr(s);
}