#include<iostream>
#include<set>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, s;
		cin>>n>>s;
		int arr[n];
		for(int i = 0;i<n;i++)
			cin>>arr[i];

		int ans = true;
		for(int i = 0;i<n;i++){
			if((i-arr[i]+1)%s != 0)
				ans = false;
		}
		if(ans)
			cout<<"yes";
		else
			cout<<"no";
		cout<<endl;
	}
}