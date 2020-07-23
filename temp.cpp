#include<bits/stdc++.h>
using namespace std;
int maxBalls(vector<int> a,vector<int> b){
    int n = a.size();
    int m = b.size();
    unordered_map<int,int> preA,preB;
    preA[a[0]] = a[0], preB[b[0]] = b[0]; 
    
    for(int i =1;i<n;i++)
        preA[a[i]] = a[i] + preA[a[i-1]];
    
    for(int i =1;i<m;i++)
    	preB[b[i]] = b[i] + preB[b[i-1]];

    int i =0, ans = 0;
    while(i<n && preB.find(a[i]) == preB.end())
        i++;
    if(i!=n)
    	ans = max(preB[a[i]],preA[a[i]]);

    int prev = i;
    i++;
    while(i<n){
        if(preB.find(a[i]) != preB.end()){
            int curr = max(preB[a[i]] - preB[a[prev]], preA[a[i]] - preA[a[prev]]);
            ans += curr;
            prev = i;
        }
        i++;    
    }
    int pa = 0,pb = 0;

    	if(prev != n-1){
    	pa = preA[a[n-1]]-preA[a[prev]];
    	}
	    int j = m-1;
	    while(b[j]!=a[prev]){
	    	j--;
	    }
	    pb = preB[b[m-1]] - preB[b[j]];
	    ans += max(pa,pb);

    ans = max(ans,max(preA[a[n-1]],preB[b[m-1]]));

 /*   for(auto x: preA){
    	cout<<x.first<<" "<<x.second<<endl;
    }*/

	return ans;       
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n, m;
	    cin>>n>>m;
	    vector<int> a(n),b(m);
	    for(int i =0;i<n;i++)
	        cin>>a[i];
	    for(int i =0;i<m;i++)
	        cin>>b[i];
	    cout<<maxBalls(a,b)<<endl;
	}
	return 0;
}