#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int n = s.size(), ans = 0;
	    int a0[n] = {0}, a1[n] =  {0}, a2[n] = {0};
	    int t0 = s[0] - '0';
	    if(t0 == 0){
	        a0[0]=1;
	    }
	    else if(t0 == 1)
	        a1[0] = 1;
	    else
	        a2[0] = 1;

	   // cout<<t0<<endl;
	 /*     for(int i = 0;i<n;i++)
	    	cout<<a0[i]<<" ";
	    	cout<<endl;
	    	for(int i = 0;i<n;i++)
	    	cout<<a1[i]<<" ";
	    	cout<<endl;
	    	for(int i = 0;i<n;i++)
	    	cout<<a2[i]<<" ";
	    	cout<<endl;*/
	    unordered_map<string, int> m;
	    m.insert({"0#0",1 });
	    for(int i = 1;i<s.size();i++){
	        int temp = s[i] - '0';
	        
	        if(temp == 0){
	            a0[i] = a0[i-1]+1;
	            a1[i] = a1[i-1];
	            a2[i] = a2[i-1];
	        }
	        else if(temp == 1){
	            a0[i] = a0[i-1];
	            a1[i] = a1[i-1]+1;
	            a2[i] = a2[i-1];
	        }
	        else{
	            a0[i] = a0[i-1];
	            a1[i] = a1[i-1];
	            a2[i] = a2[i-1]+1;
	        }
	    }
	  
	    for(int i = 0;i<n;i++){
	        int t01 = a0[i] - a1[i];
	        int t02 = a0[i] - a2[i];
	        string c = to_string(t01)+"#"+to_string(t02);
	  //      cout<<t01<<" "<<t02<<endl;
	        if(m.find(c)!=m.end()){
	            ans+=m[c];
	            m[c]++;
	        }
	        else
	        m[c] = 1;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}