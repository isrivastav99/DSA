#include<bits/stdc++.h>
using namespace std;
int maxalt(vector<int> v){
	vector<int> inc(v.size());
	vector<int> dec(v.size());
	int n = v.size(), ans = INT_MIN;
	inc[n-1] = v[n-1];
	dec[n-1] = v[n-1];
	for(int i = n-2;i>=0;i--){
		int md = -1, mi = -1;
		for(int j = i + 1;j<n;j++){
			if(v[i]<v[j]){
				md = max(md, inc[j]);
			}
			if(v[i]>v[j]){
				mi = max(mi, dec[j]);
			}
		}			
			inc[i] = mi == -1?v[i]:mi+v[i];
			dec[i] = md == -1?v[i]:md + v[i];

			ans = max(ans, inc[i]);
	}

	return ans;
}
int main(){
	int n;
	cin>>n;
	vector<int> v;
	for(int i = 0;i<n;i++){
		int a;
		cin>>a;
		v.push_back(a);
	}
	cout<<maxalt(v);
}