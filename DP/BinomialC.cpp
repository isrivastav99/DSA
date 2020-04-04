#include<bits/stdc++.h>
using namespace std;
int BinomialC(int** arr, int n, int k){
	for(int i = 0;i<=n;i++){
		arr[i][0] = 1;
		arr[i][n] = 1;
	}
	for(int j = 1;j<n;j++){
		arr[0][j] = 0;
	}

	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=n;j++){
			arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
		}
	}

	return arr[n][k];
}
int main(){
	int n, k;
	cin>>n>>k;
	int** arr = new int*[n+1];
	for(int i = 0;i<=n;i++){
		arr[i] = new int[n+1];
		for(int j = 0;j<=n;j++){
			arr[i][j] = -1;
		}
	}
	cout<<BinomialC(arr, n, k);
}