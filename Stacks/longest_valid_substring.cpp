#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string b;
		cin>>b;
		stack<int> s;
		s.push(-1);
		int ans = 0, curr = 0;
		for(int i = 0;i<b.size();i++){
			if(b[i] == '(')
				s.push(i);
			else{
				s.pop();
				if(!s.empty()){
					curr = i - s.top();
					ans = max(ans, curr);
				}
				else
					s.push(i);
			}
		}
		cout<<ans<<endl;
	}
}