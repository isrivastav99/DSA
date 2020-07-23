#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n],mtill[n];
		for(int i =0;i<n;i++)
			cin>>arr[i];

		int j = n-1;
		while(j>0 && arr[j]<=arr[j-1])
			j--;
		while(j>0 && arr[j]>=arr[j-1])
			j--;
		cout<<j<<endl;
	}
}