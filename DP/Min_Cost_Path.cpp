#include<bits/stdc++.h>
using namespace std;
void print(int** arr, int m, int n){
	for(int i = 0;i<m;i++){
		for(int j = 0;j<n;j++)
			cout<<arr[i][j]<<" ";
	}
}
int min(int x, int y, int z) 
{ 
   if (x < y) 
      return (x < z)? x : z; 
   else
      return (y < z)? y : z; 
} 
int minCost(int** arr, int m, int n){
	if(m<0 || n < 0)
		return INT_MAX;
	if(m == 0 && n == 0)
		return arr[m][n];

	return arr[m][n] + min(minCost(arr, m-1, n-1), minCost(arr, m-1,n), minCost(arr, m, n-1));
}
int main(){
	int m, n;
	cin>>m>>n;
	int** arr = new int*[m];
	for(int i = 0;i<m;i++){
		arr[i] = new int[n];
		for(int j = 0;j<n;j++){
			int temp;
			cin>>temp;
			arr[i][j] = temp;
		}
	}

	cout<<minCost(arr, m-1 ,n-1);

}