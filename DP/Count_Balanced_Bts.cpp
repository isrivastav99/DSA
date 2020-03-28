#include <bits/stdc++.h> 
using namespace std; 
int CountBalTrees(int n, int* dp){
	if(n == 1||n==0)
		return 1;
	
	dp[0] = 1;
	dp[1] = 1;
	for(int i = 2;i<=n;i++){
		dp[i] = dp[i-1]*(2*dp[i-2] + dp[i-1]);
	}
	return dp[n];
}
int main(){
	int n;
	cin>>n;
	int* dp = new int[n+1];
	cout<<CountBalTrees(n, dp);
	return 0;
}