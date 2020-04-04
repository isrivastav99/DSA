#include<bits/stdc++.h>
using namespace std;
int GoldMine(int** arr, int m, int n){
	int** ans = new int*[m];
	for(int i = 0;i<m;i++){
		ans[i] = new int[n];
		for(int j = 0;j<n;j++){
			ans[i][j] = 0;
		}
	}

	for(int c = n-1; c>=0;c--){
		for(int r = 0;r<m;r++){
			int right = (c == n-1)?0:ans[r][c+1];
			int rightup = (r == 0 || c == n-1)?0:ans[r-1][c+1];
			int rightdown = (r == m-1 || c == n-1)?0:ans[r+1][c+1];

			ans[r][c] = arr[r][c] + max(right, max(rightdown, rightup));
		}
	}
	int res = INT_MIN;
	for(int i = 0;i<m;i++){
		res = max(ans[i][0], res);
	}
	return res;

}
int main(){
	int n, m;
	cin>>m>>n;
	int** arr = new int*[m];
	int im = 0;
	for(int i = 0;i<m;i++){
		arr[i] = new int[n];
		for(int j = 0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	cout<<GoldMine(arr, m, n);

}