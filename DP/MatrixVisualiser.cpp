#include<bits/stdc++.h>
using namespace std;
int main(){
	int r, c;
	cin>>r>>c;
	int m[r][c];
	for(int i = 0;i<r;i++){
		for(int j = 0;j<c;j++)
			cin>>m[i][j];
	}
	cout<<endl;
	for(int i = 0;i<r;i++){
		for(int j = 0;j<c;j++)
			cout<<m[i][j]<<" ";
		cout<<endl;
	}

}