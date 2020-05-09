#include<bits/stdc++.h>
using namespace std;
int main()
 {
 	int t;
 	cin>>t;
 	while(t--){
 		int n,k;
 		cin>>n>>k;
 		if(k<n){
 			cout<<k<<endl;
 			continue;
 		}
 		
 		int f = k/n,of = k/n, curr = k, nf;
 		while(1){
 			if(curr/n == (curr+f)/n)
 				break;
 			curr += f;
 			nf = curr/n;
 			f = nf - of;
 			of = curr/n;
 		}
 		cout<<curr+f<<endl;
 	}
 }