//couldnt complete
#include<bits/stdc++.h>
using namespace std;
int goodString(string s, int f,int e,char a){
	int ctAf = 0, ctAs = 0,m = (f+e)/2;
	if(e==f){
		cout<<a<<" "<<s[f]<<endl;
		return s[f]!=a;
	}

	for(int i = f;i<=m;i++){
		if(s[i] == a)
			ctAf++;
	}
	for(int i = m+1;i<=e;i++){
		if(s[i] == a)
			ctAs++;
	}
	int r = goodString(s,m+1,e,a+1);
	int l = goodString(s,f,m,a+1);
/*for(int i = f;i<=e;i++)
		cout<<s[i];*/
//	cout<<" "<<a<<" "<<ctAf<<" "<<r<<" "<<ctAs<<" "<<l<<endl;
	return min(m+1 - ctAf +r,m+1 - ctAs + l);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int ans = 0;
		cout<<goodString(s,0,n-1,'a')<<endl;
	}
}