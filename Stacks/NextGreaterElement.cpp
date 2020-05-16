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
		stack<int> s, ans;
		ans.push(-1);
		s.push(arr[n-1]);
		int j = n-2;
		while(j>=0){
			while(s.top()<=arr[j])
				s.pop();
			if(s.empty())
				ans.push(-1);
			else
				ans.push(s.top());
			s.push(arr[j]);
			j--;
		}
		while(!ans.empty()){
			cout<<ans.top()<<" ";
			ans.pop();
		}
		cout<<endl;
	}
}