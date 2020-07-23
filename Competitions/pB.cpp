#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[2*n];
		vector<int> ans;
		bool check[n+1] = {false};
		for(int i =0;i<2*n;i++)
			cin>>arr[i];
		for(int i = 0;i<2*n;i++){
			if(check[arr[i]] == false){
				ans.push_back(arr[i]);
				check[arr[i]] = true;
			}
		}

		for(int i =0;i<n;i++)
			cout<<ans[i]<<" ";
		cout<<endl;
	}
}