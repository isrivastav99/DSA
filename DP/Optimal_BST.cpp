#include<bits/stdc++.h>
using namespace std;
int OpBST(int nodes[], int freq[], int n){
	 int** dp = new int*[n];
        for(int i = 0;i<n;i++){
            dp[i] = new int[n];
            for(int j =  0;j<n;j++){
                dp[i][j] = 0;
            }
        }
	for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
           dp[i][i] = freq[i];
        }
    }

    for(int x = 1;x<n;x++){
		int i = 0;
		for(int j = x;j<n;j++){
			int ans = INT_MAX, sum = 0;
			for(int k = i;k<=j;k++){
				sum += freq[k];
				int a=0,b=0;
				if(k==0)
					a = dp[k+1][j];
				else if(k == j)
					a = dp[i][k-1];
				else
					a = dp[i][k-1], b = dp[k+1][j];

				ans = min(ans, a+b); 
			}
			dp[i][j] = ans + sum;
			i++;
		}
	}
	return dp[0][n-1];
}
int main(){
	int n;
	cin>>n;
	int nodes[n], freq[n];
	for(int i = 0;i<n;i++){
		cin>>nodes[i];
	}
	for(int i = 0;i<n;i++){
		cin>>freq[i];
	}
	cout<<OpBST(nodes, freq, n);
}

