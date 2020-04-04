#include <bits/stdc++.h> 
using namespace std; 
int CalcMinSteps(int n, int* dp){
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 3;

	for(int i = 4;i<=n;i++){
		dp[i] = i;

		for(int j = 1;j<=floor(sqrt(i));j++){
			int t = j*j;
			if(t>i)
				break;
			else
				dp[i] = min(dp[i], 1 + dp[i  - t]);
		}
	}

	return dp[n];
}
int main(){
	int n;
	cin>>n;
	int* dp = new int[n+1];
	cout<<CalcMinSteps(n,dp);
	return 0;
}