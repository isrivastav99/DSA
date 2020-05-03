#include<iostream>
using namespace std;
int bs(int arr[], int s, int e, int f){
	int mpt = (e+s)/2;
		while(s<=e){
		if(f == arr[mpt])
			return mpt;

		if(f>arr[mpt]){
			return bs(arr, mpt+1, e, f);
		}
		else{
			return bs(arr, s, mpt-1, f);
		}
	}
	return -1;
}
int main(){
	int n,f;
	cin>>n>>f;
	int arr[n];
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	cout<<bs(arr, 0, n-1,f);
}