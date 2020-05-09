#include<bits/stdc++.h>
using namespace std;
int main()
 {
 	int t;
 	cin>>t;
 	while(t--){
 		int n;
 		cin>>n;
 		int arr[n];
 		for(int i = 0;i<n;i++)
 			cin>>arr[i];

 		int i = 1,j = n-1, pct = arr[0], chances = 1, acount = arr[0], bcount = 0;
 		bool alice = false;
 		while(i<=j){
 			chances++;
 			int curr = 0;
 			if(!alice){
 				while(curr<=pct && i<=j){
 					curr+=arr[j];
 					bcount += arr[j];
 					j--;
 				}
 				alice = true;
 			}
 			else{
 				while(curr<=pct && i<=j){
 					curr+=arr[i];
 					acount += arr[i];
 					i++;
 				}
 				alice = false;
 			}

 		//	cout<<i<<" "<<j<<endl;
 			pct = curr;
 		}
 		cout<<chances<<" "<<acount<<" "<<bcount<<endl;
 	}
 	return 0;
 }