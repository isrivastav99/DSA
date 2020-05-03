#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
   
    int mx = INT_MIN, mn = INT_MAX, ans = 0;
    for(int i = 0;i<n-1;i++){
        set<int> s;
        for(int j = i;j<n;j++){
            mx = max(mx, arr[j]);
            mn = min(mn, arr[j]);
        //    cout<<mx<<" "<<mn<<endl;
            if(s.find(arr[j])!=s.end())
                break;
            if(j-i+1 == mx-mn+1)
                ans = max(ans, j-i+1);
            s.insert(arr[j]);
        }

    //    for(auto it:s)
     //       cout<<it<<endl;
    }
    cout<<ans<<endl;
}