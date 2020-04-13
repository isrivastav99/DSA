#include<bits/stdc++.h>
using namespace std;
int MaxRevenue(int x[], int revenue[], int m, int n, int t){
	int ans[m+1];
	int i = 1, j = 0;
	ans[0] = 0;
	while(i!=m+1){
		if(x[j] == i){
			ans[i] = max(revenue[j] + ans[i-t-1], ans[i-1]);
			j++;
		}
		else
			ans[i] =ans[i-1];

		i++;
	}

	return ans[m];
}

int main(){
	int m,n;
	cin>>m>>n;
	int x[n], revenue[n];
	for(int i = 0;i<n;i++){
		cin>>x[i];
	}
	for(int i = 0;i<n;i++){
		cin>>revenue[i];
	}
	int t;
	cin>>t;
	cout<<MaxRevenue(x,revenue,m,n,t);
}