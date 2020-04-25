#include<bits/stdc++.h>
using namespace std;
int countPS(string str)
{
   int n = str.size();
   int dp[n][n];
   if(n<2)
   return n;
   for(int i = 0;i<n;i++){
        dp[i][i] = 1;
    }
    for(int j = 1;j<n;j++){
        if(str[j-1] == str[j])
            dp[j-1][j] = 3;
        else
            dp[j-1][j] = 2;
    }
    
    for(int x = 2;x<n;x++){
        int i = 0;
        for(int j = x;j<n;j++){
            if(str[i] == str[j]){
                dp[i][j] = dp[i][j-1] + dp[i+1][j] + 1;
            }
            else
                dp[i][j] = dp[i][j-1] + dp[i+1][j] - dp[i+1][j-1];
                
            i++;
        }
                
    }
    for(int i = 0;i<n;i++){
      for(int j = 0;j<n;j++){
        cout<<dp[i][j]<<" ";
      }
      cout<<endl;
    }
    
        return dp[0][n-1];
}
int main(){
    string str;
    cin>>str;
    countPS(str);
   // return 0;

}