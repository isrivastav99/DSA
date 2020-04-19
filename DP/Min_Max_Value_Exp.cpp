#include<bits/stdc++.h>
using namespace std;
int calc(int A, int B, int k, char op[]){
	if(op[k] == '+')
		return A + B;
	else
		return A*B;
}
int MMVE(int s[], char op[], int n){
	int dp[n][n];
	for(int i = 0;i<n;i++){
		dp[i][i] = s[i];
	}
	for(int x = 1;x<n;x++){
		int i = 0;
		for(int j = x;j<n;j++){
			int ans = INT_MIN;
			for(int k = i;k<j;k++){
				int A = dp[i][k];
				int B = dp[k+1][j];
				ans = max(ans, calc(A,B,k,op));
			}
			dp[i][j] = ans;
			i++;
		}
	}
	return dp[0][n-1];
}
int MMVEmin(int s[], char op[], int n){
	int dp[n][n];
	for(int i = 0;i<n;i++){
		dp[i][i] = s[i];
	}
	for(int x = 1;x<n;x++){
		int i = 0;
		for(int j = x;j<n;j++){
			int ans = INT_MAX;
			for(int k = i;k<j;k++){
				int A = dp[i][k];
				int B = dp[k+1][j];
				ans = min(ans, calc(A,B,k,op));
			}
			dp[i][j] = ans;
			i++;
		}
	}
	return dp[0][n-1];
}
int main(){
	int n;
	cin>>n;
	int s[n];
	char op[n-1];
	for(int i = 0;i<n;i++){
		cin>>s[i];
	}
	for(int i = 0;i<n-1;i++)
		cin>>op[i];

	cout<<MMVE(s, op, n)<<" "<<MMVEmin(s,op,n);
}
