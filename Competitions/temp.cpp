#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void print(vector<int> primes, int n){
    int j = 0;
    int i =3;
    cout<<2<<" ";
    while(j<n-1){
        if(primes[i] == 1){
            cout<<i<<" ";
            j++;
        }
        i=i+2;
    }
}
int main()
 {
    vector<int> primes(1000001,0);
    for(ll i = 3;i<=1000000;i=i+2)
        primes[i] = 1;
    for(ll i = 3;i<=1000000;i=i+2){
        if(primes[i] == 1){
            for(ll j = i*i;j<=10000;j = j+i)
                primes[j] = 0;
        }
    }
    primes[2] = 1;
	int t;
	cin>>t;
	while(t--){
	    int n;
	    print(primes,n);
	    cout<<endl;
	}
	return 0;
}