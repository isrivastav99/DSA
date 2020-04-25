#include<iostream>
#include<unordered_map>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int* arr = new int[n];
	    int* c0 = new int [n];
	    int* c1 = new int[n];
	    for(int i = 0;i<n;i++){
	        cin>>arr[i];
	    }
	    if(arr[0] == 0)
	    c0[0] = 1, c1[0] = 0;
	    else
	    c0[0] = 0, c1[0] = 1;
	    for(int i = 1;i<n;i++){
	        if(arr[i] == 0){
	            c0[i] = c0[i-1] + 1;
	            c1[i] = c1[i-1];
	        }
	        else{
	            c0[i] = c0[i-1];
	            c1[i] = c1[i-1]+1;
	        }
	    }
	    
	    int ans = 0;

	    unordered_map<int,int> m;
	    m.insert({0,1});
	    for(int i = 0;i<n;i++){
	        if(m.count(c1[i] - c0[i])>0){
	            ans+=m[c1[i] - c0[i]];
	             m[c1[i] - c0[i]]++;
	        }
	        else
	            m[c1[i] - c0[i]] = 1;
	    }
	    

		   cout<<ans<<endl;
	}
	return 0;
}