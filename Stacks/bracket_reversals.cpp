#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string b;
		cin>>b;
		stack<char> s;
		for(int i = 0;i<b.size();i++){
			if(b[i] == '{')
				s.push(b[i]);
			else{
				if(s.empty())
					s.push(b[i]);
				else if(s.top() == '{')
					s.pop();
				else
					s.push(b[i]);
			}
		}
		int oc = 0, cc = 0;
		while(!s.empty()){
			if(s.top() == '{')
				oc++;
			else
				cc++;
			s.pop();
		}
		if(oc%2 == 0 && cc%2 == 0)
			cout<<(oc/2)+(cc/2);
		else if(oc%2 != 0 && cc%2 != 0)
			cout<<(oc/2)+(cc/2)+2;
		else
			cout<<-1;
		cout<<endl;
	}
}