#include<bits/stdc++.h>
using namespace std;
int main()
 {
 	int n;
 	cin>>n;
 	int arr[n];
 	for(int i = 0;i<n;i++)
 		cin>>arr[i];
 	int i = 0, e0 = -1, e1 = -1;
 	while(i<n){
 		if(arr[i] == 0){
 			if(e0 == -1){
 				e0 = i+1;
 				i++;
 				continue;
 			}
 			swap(arr[e0], arr[i]);
 			e0++;
 			e1 = i+1;
 		}
 		else{
 			e1 = i+1;
 		}
 		i++;
 	}
 	//cout<<e0<<" "<<e1;
 	for(int i = 0;i<n;i++)
 		cout<<arr[i]<<" ";
 }