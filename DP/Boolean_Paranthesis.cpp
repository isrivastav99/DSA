#include<bits/stdc++.h>
using namespace std;
int BoolP(int s[], int op[], int n){
	int dp[n][n];
	
}
int main(){
	int n;
	cin>>n;
	char s[n], op[n-1];
	for(int i = 0;i<n;i++){
		cin>>s[i];
	}
	for(int i = 0;i<n-1;i++)
		cin>>op[i];

	cout<<BoolP(s, op, n);
}
