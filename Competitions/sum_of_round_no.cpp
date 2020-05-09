#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
   	int n;
   	cin>>n;
   	int mul=1;
   	vector<int> ans;
   	while(n!=0){
   		int rem=n%10;
   		if(rem!=0){
   	    ans.push_back(rem*mul);
   	    }
   		n=n/10;
   		mul=mul*10;
   	}
   	cout<<ans.size()<<endl;
   	for(int i=0;i<ans.size();i++){
   		cout<<ans[i]<<" ";
   	}
   	cout<<endl;
   }
	return 0;
}