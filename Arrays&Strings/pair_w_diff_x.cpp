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
 		int z = 0,y =1;
 		bool check = false;
 		while(y < n){
 			if(arr[y] - arr[z] == x){
 				check = true;
 				break;
 			}
 			else if(arr[y] - arr[z] < x)
 				y++;
 			else
 				z++;
 		}	
 
 		if(check)
 			cout<<1;
 		else
 			cout<<-1;
 		cout<<endl;
 	}
 }