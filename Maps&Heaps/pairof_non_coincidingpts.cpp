#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n][2];
		for(int i = 0;i<n;i++){
			int x,y;
			cin>>x>>y;
			arr[i][0] = x;
			arr[i][1] = y;
		}
		unordered_map<int, int> mx, my;
		unordered_map<string, int> ms;
		int ans = 0;
		for(int i = 0;i<n;i++){
			int x = arr[i][0];
			int y = arr[i][1];
			if(mx.find(x)!=mx.end())
				ans+=mx[x];

			if(my.find(y)!= my.end())
				ans+=my[y];

			string c = to_string(x) + "#" + to_string(y);
			if(ms.find(c)!=ms.end())
				ans-= (2*ms[c]);

			mx[x]++;
			my[y]++;
			ms[c]++;
		}
		cout<<ans<<endl;
	}
}