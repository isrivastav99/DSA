#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y,z;
		cin>>x>>y>>z;

		int a = -1,b=-1,c=-1;
		if(x == y){
			a = x;
			if(z<=x && z<=y && z>0){
				b = z;
				c = z;
			}
		}
		else if(x == z){
			b = x;
			if(y<=z && y<=x && y>0){
				a = y;
				c = y;
			}
		}
		else if(y == z){
			c = y;
			if(x<=y && x<=z && x>0){
				a = x;
				b = x;
			}
		}

		if(a == -1 || b == -1 || c == -1){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
			cout<<a<<" "<<b<<" "<<c<<endl;
		}
		
	}
}