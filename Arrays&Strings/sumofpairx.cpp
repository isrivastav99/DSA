#include<bits/stdc++.h>
using namespace std;
int main()
 {
 	int t;
 	cin>>t;
 	while(t--){
 		int n,x;
 		cin>>n>>x;
 		int arr[n];
 		for(int i = 0;i<n;i++){
 			cin>>arr[i];
 		}
 		sort(arr, arr +n);
 		int z = 0,y =n-1;
 		bool check = false;
 		while(z<y){
 			if(arr[z] + arr[y] == x)
 				check = true;
 			else if(arr[z] + arr[y]>x)
 				y--;
 			else
 				z++;
 		}	
 
 		if(check)
 			cout<<"Yes";
 		else
 			cout<<"No";
 		cout<<endl;
 	}
 }