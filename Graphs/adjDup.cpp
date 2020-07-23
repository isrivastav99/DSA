#include<iostream>
using namespace std;
int n;
string ans = "";
void adjDup(string str,int pos){
    if(pos>=n){
        return;
    }
    cout<<str[pos]<<" "<<str[pos-1]<<endl;
    if(str[pos] != str[pos-1]){
        ans += str[pos-1];
        adjDup(str, pos+1); 
    }
    else
        adjDup(str, pos+2); 
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    int n = str.size();
	    adjDup(str,1);
	    if(str[n-1]!=str[n-2])
	        ans += str[n-1];
	    cout<<ans<<endl;
	}
	return 0;
}