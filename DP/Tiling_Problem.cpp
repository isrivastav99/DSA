#include<bits/stdc++.h>
using namespace std;
int TP(int* arr, int n){
	if(n <=1)
		return 0;

	return 1 + TP(arr + 1, n-1) + TP(arr + 2, n-2);

}
int TP_Memo(int* arr, int n){
	if(n<0)
		return 0;
	if(n == 0)
		return 1;
		
	if(arr[n]!= -1)
		return arr[n];
	
	arr[n]  = TP_Memo(arr, n-1) + TP_Memo(arr, n-2); 

	return arr[n];

}
long long int TP_DP(long long int* arr, int n){
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;

	for(int i = 3;i<=n;i++){
		arr[i] = arr[i-1] + arr[i-2];
	}
	return arr[n];

}
int main(){
	int n;
	cin>>n;
	long long int* arr = new long long int[n+1];
	for(int i = 0;i<=n;i++){
         arr[i] = -1;
    }
	cout<<TP_DP(arr, n);
	return 0;
}