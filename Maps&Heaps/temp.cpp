#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	priority_queue<int, vector<int>, greater<int>> pq;
	for(int i = 0;i<=k;i++){
		pq.push(arr[i]);
	}
	int j = 0;
	for(int i = k+1;i<n;i++){
		arr[j] = pq.top();
		pq.pop();
		pq.push(arr[i]);
		j++;
	}
	while(!pq.empty()){
		arr[j] = pq.top();
		pq.pop();
		j++;
	}
	for(int i = 0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
