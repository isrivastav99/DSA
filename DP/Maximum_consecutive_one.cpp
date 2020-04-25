#include<bits/stdc++.h>
using namespace std;
int maxones( int *arr, int n){
	int cc = 0, oc = 0;
	if(arr[0] ==1)
		cc++;
	for(int i = 1;i<n;i++){
		if(arr[i] == 1 && arr[i]!=arr[i-1])
			cc = 1;
		else if(arr[i] == arr[i-1] && arr[i] == 1)
			cc++;
		else
			oc = max(cc, oc);
	}
	oc = max(cc,oc);
	return oc;
}
int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0;i<n;i++){
    	cin>>arr[i];
    }
    cout<<maxones(arr,n);
    return 0;
}