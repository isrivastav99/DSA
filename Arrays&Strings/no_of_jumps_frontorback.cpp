#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int n = 1;
	while(1){
		if((n*(n+1))/2 ==t || (n*(n+1))/2>t && ((n*(n+1))/2-t)%2==0)
			break;
		n++;
	}
	cout<<n<<endl;
}