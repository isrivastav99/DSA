#include<bits/stdc++.h>
using namespace std;
int MinMoves(string s){
	int n = s.size();
	int dp[n];
	for(int i = 0;i<n;i++)
		dp[i] = INT_MAX;

	string s1 ="", s2 = "";
	s1 += s[0];
	dp[0] = 1;
	for(int i = 1;i<n;i++){
		s1 += s[i];
		s2 = s.substr(i+1, i+1);

		dp[i] = min(dp[i], dp[i-1]+1);

		if(s1 == s2)
			dp[2*i+1] = min(dp[2*i+1], dp[i]+1);
	}

	return dp[n-1];
}
int main(){
    string str;
    cin>>str;

    int n = str.size();
    cout<<MinMoves(str);

    return 0;

}
