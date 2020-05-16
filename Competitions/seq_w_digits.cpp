#include<bits/stdc++.h>
using namespace std;
#define int long long

int min(int a,int b)
{
    return a<b?a:b;
}
int max(int a,int b)
{
    return a>b?a:b;
}
int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int a1,k;
        cin>>a1>>k;
        for(int i=0;i<k-1;i++)
        {
            int s1=INT_MAX,s2=INT_MIN,x=a1;
            bool b1=true,b2=true;
            while(x)
            {
                if(b1) s1=min(s1,x%10);
                if(b2) s2=max(s2,x%10);
                if(s1==0) b1=false;
                if(s2==9) b2=false;
                if(!b1 && !b2) break;
                x/=10;
            }
            a1+=(s1*s2);
            if(s1==0) break;
        }
        cout<<a1<<endl;
    }
    return 0;
}