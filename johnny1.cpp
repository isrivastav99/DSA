#include<bits/stdc++.h>
using namespace std;
#define int long long
int ans(int a){
	if(a%3 == 0)
		return a/3;
	else
		return (a/3) + 1;
}
int mod(int a, int b){
	if((a-b)>0)
		return a-b;
	return b-a;
}
int32_t main(){
	int t;
	cin>>t;
	while(t--){
		int start, target;
		cin>>start>>target;
		int cts = 0, ctt = 0;
		int ts = start, tt = target;
		while(ts%2 !=1){
			cts++;
			ts= ts/2;
		} 
		while(tt%2 !=1){
			ctt++;
			tt = tt/2;
		}
		//cout<<ctt<<" "<<cts<<endl;
		if(start*pow(2,(ctt-cts)) != target)
			cout<<-1;
		else
			cout<<ans(mod(ctt,cts));
		cout<<endl;
	}
}