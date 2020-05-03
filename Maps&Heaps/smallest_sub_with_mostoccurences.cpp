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
	    int arr[n];
	    unordered_map<int, pair<int, pair<int,int>>> m;
	    for(int i = 0;i<n;i++){
	        cin>>arr[i];
	        if(m.find(arr[i])!=m.end()){
	            pair<int, pair<int, int>> p = m[arr[i]];
	            p.first++;
	            p.second.second = i;
	            m[arr[i]] = p;
	        }
	        else{
	            pair<int, pair<int, int>> p;
	            p.first = 1;
	            p.second.first = i, p.second.second = i;
	            m.insert({arr[i],p});
	        }
	    }
	    int mval = 0, mi = 100000, ei, si;
	    for(auto it = m.begin();it!=m.end();it++){
	        pair<int, pair<int, int>> p = it->second;
	     //  cout<<it->first<<" "<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
	       if(p.first==mval){
	            if(mi > p.second.second - p.second.first + 1){
	            mi =  p.second.second - p.second.first + 1;
	            ei = p.second.second;
	            si = p.second.first;
	        	}
	        }
	        else if(p.first > mval){
	            mi = p.second.second - p.second.first + 1;
	            ei = p.second.second;
	            si = p.second.first;
	            mval = p.first;
	        }
	    }
	    for(int i = si;i<=ei;i++){
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	}
	   
	return 0;
}