#include<bits/stdc++.h>
using namespace std;
int CeilIndex(vector<int>& v, int l, int r, int key) 
{ 
    while(r-l>1){
        int m=  (r+l)/2;
        if(v[m]>=key)
            r = m;
        else
            l = m;  
    } 
        return r;
} 
int lengthOfLIS(vector<int>& nums){
        if(nums.size() == 0)
            return 0;
        vector<int> dp(nums.size(), 0);
        dp[0] = nums[0];
        int l = 1;
        for(int i = 1;i<nums.size();i++){
                if(nums[i]<dp[0])
                    dp[0] = nums[i];
                else if(nums[i]>dp[l-1])
                    dp[l++] = nums[i]; 
                else
                    dp[CeilIndex(dp, -1, l-1, nums[i])] = nums[i];   
        }   
        return l;
}
int main(){
	int n;
	cin>>n;
	vector<int> nums(n);
	for(int i = 0;i<n;i++){
			int a;
			cin>>a;
			nums[i] = a;	
	}
	cout<<lengthOfLIS(nums);
	return 0;
}