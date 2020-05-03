#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		int arr[n][2], sm = INT_MAX, l =INT_MIN;
		for(int i = 0;i<n;i++){
			cin>>arr[i][0]>>arr[i][1];
			sm = min(sm, arr[i][0]);
			l = max(l, arr[i][1]);
		}
		int size = l-sm+1;
		int ans[size] = {0};
		for(int i = 0;i<n;i++){
			ans[arr[i][0]-1] +=1;
			if(arr[i][1]<size)
				ans[arr[i][1]] -= 1;
		}
		int ak[size] = {0};
		int ak1[size] = {0};
		if(ans[0] == k)
				ak[0]++;
		if(ans[0] == k+1)
				ak1[0]++;
		int ct = 0;
		for(int i = 1;i<size;i++){
			ans[i] += ans[i-1];

			if(ans[i] == k){
				ct++;
				ak[i]++;
			}
			if(ans[i] == (k+1))
				ak1[i]++;

			ak[i] += ak[i-1];
			ak1[i] += ak1[i-1];
		}
		int m = 0;
		for(int i = 0;i<n;i++){
			int tk = ak[arr[i][1]-1];
			int tk1 = ak1[arr[i][1]-1];
			if(arr[i][0]>1){
				tk -= ak[arr[i][0]-2];
				tk1 -= ak1[arr[i][0]-2];
			}
			m = max(m, ct-tk+tk1);
		}
		cout<<m<<endl;
	}
}