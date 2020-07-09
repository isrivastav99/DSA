#include<iostream>
using namespace std;
int ans = 0;
int RecMaxSum(int n){
    if(n<=1)
        return 0;
        
    int f = max(n/2,RecMaxSum(n/2));
    int s = max(n/3,RecMaxSum(n/3));
    int t = max(n/4,RecMaxSum(n/4));
    cout<<n<<" "<<f<<" "<<s<<" "<<t<<endl;
    ans = max(ans, f+s+t);
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cout<<max(ans,RecMaxSum(n))<<endl;
	}
	return 0;
}