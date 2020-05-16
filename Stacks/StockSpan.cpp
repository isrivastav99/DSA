#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i = 0;i<n;i++)
			cin>>arr[i];
		stack<int> s;
		vector<int> ans;
		ans.push_back(1);
		s.push(0);
		for(int i = 1;i<n;i++){
			while(!s.empty() && arr[s.top()]<arr[i]){
				s.pop();
			}
			if(s.empty())
				ans.push_back(i+1);
			else
				ans.push_back(i-s.top());
			s.push(i);
		}
		for(int i = 0;i<n;i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
}