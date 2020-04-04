#include<bits/stdc++.h>
using namespace std;
int ci(vector<int> dp, int l, int r, int val){
	while(r-l>1){
		int m = (r+l)/2;
		if(dp[m]<val)
			l = m;
		else
			r = m;
	}
	return r;
}
int LIS(vector<pair<int,int>> v,int n){
	vector<int> dp(n,-1);
	dp[0] = v[0].second;
	int l = 1;
	for(int i = 1;i<n;i++){
		if(v[i].second<dp[0])
			dp[0] = v[0].second;
		else if(v[i].second>dp[l-1])
			dp[l++] = v[i].second;
		else
			dp[ci(dp, -1, l, v[i].second)] = v[i].second;
	}
	return l;
}
int main(){
	vector<pair<int, int>> v;
	int n;
	cin>>n;
	for(int i = 0;i<n;i++){
		int north, south;
		cin>>north>>south;
		v.push_back({north,south});
	}
	sort(v.begin(), v.end());
	cout<<LIS(v,n);
}