#include<bits/stdc++.h>
using namespace std;
void push(vector<int> &arr, vector<int> &top, vector<int> &next, int curr){

}
int main(){
	int n, k;
	cin>>n>>k;
	vector<int> arr, top(k, -1), next(n);
	for(int i = 0;i<n-1;i++){
		next[i] = i+1;
	}
	next[n-1] = -1;
	int t, curr = 0;
	cin>>t;
	while(t--){
		
	}
}