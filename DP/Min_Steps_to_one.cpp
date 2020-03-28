#include <bits/stdc++.h> 
using namespace std; 
int MinSteps(int n, int* dp){
	if(n == 1)
		return 0;
	if(dp[n] != -1){
		return dp[n];
	}

	int temp = MinSteps(n-1, dp);

	if(n%3 == 0){
		temp = min(temp, MinSteps(n/3, dp));
	}

	if(n%2 == 0)
		temp = min(temp, MinSteps(n/2, dp));
	dp[n] = 1 + temp;
	return dp[n];
}
int main(){
	int n;
	cin>>n;
	int* dp = new int[n+1];
	for (int i=0; i<=n; i++) 
        dp[i] = -1; 
	cout<<MinSteps(n, dp);
	return 0;
}