#include<bits/stdc++.h>
using namespace std;
int longestPalindromeSubseq(string s) {
        int n  = s.size();
        if(n <2)
            return n;
        int dp[n][n];
        for(int i = 0;i<n;i++){
            dp[i][i] = 1;
        }
        for(int x = 1;x<n;x++){
            int i = 0;
            for(int j = x;j<n;j++){
             //   int ans = 0;
                if(s[i] == s[j]){
                    if((i+1)<=(j-1))
                    dp[i][j] = dp[i+1][j-1] + 2;
                    else
                    dp[i][j] = 2;
                }
                    
                else
                    dp[i][j] = max(dp[i][j-1],dp[i+1][j]);
                
                i++;
            }
                
        }
        return dp[0][n-1];
    }
int main(){
    string str;
    cin>>str;
    int k;
    cin>>k;
    int n = str.size();
    if(n - longestPalindromeSubseq(str) <= k)
        cout<<"yes";
    else
        cout<<"no";

    return 0;

}