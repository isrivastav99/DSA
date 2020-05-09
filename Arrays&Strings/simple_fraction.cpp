#include<bits/stdc++.h>
using namespace std;
int main()
 {
        int n;cin>>n;
        int d;cin>>d;
        cout<<n/d;
        int ans=n%d;
        if(ans!=0){
            cout<<".";
            string s="";
            unordered_map<int,int> mp;
            while(ans!=0&&mp.find(ans)==mp.end()){
                mp[ans]=s.length();
                ans=10*ans;
                s=s+to_string(ans/d);
                ans=ans%d;
            }
            if(ans==0){
                cout<<s;
            }
            else{
                cout<<s.substr(0,mp[ans])<<"("<<s.substr(mp[ans])<<")";
            }
        }
        cout<<endll;
        
}