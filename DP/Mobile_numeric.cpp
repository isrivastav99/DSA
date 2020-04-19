#include<bits/stdc++.h>
using namespace std;
void It(list<int>* v){
    v[0].push_back(0),v[0].push_back(8);
    v[1].push_back(1),v[1].push_back(2),v[1].push_back(4);
    v[2].push_back(2),v[2].push_back(1),v[2].push_back(3),v[2].push_back(5);
    v[3].push_back(3),v[3].push_back(2),v[3].push_back(6);
    v[4].push_back(1),v[4].push_back(5),v[4].push_back(4),v[4].push_back(7);
    v[5].push_back(8),v[5].push_back(2),v[5].push_back(6),v[5].push_back(4),v[5].push_back(5);
    v[6].push_back(9),v[6].push_back(5),v[6].push_back(3),v[6].push_back(6);
    v[7].push_back(4),v[7].push_back(8),v[7].push_back(7);
    v[8].push_back(0),v[8].push_back(5),v[8].push_back(9),v[8].push_back(7),v[8].push_back(8);
    v[9].push_back(8),v[9].push_back(6),v[9].push_back(9);
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	char keypad[4][3] = {{'1','2','3'}, 
                        {'4','5','6'}, 
                        {'7','8','9'}, 
                        {'*','0','#'}}; 
	  /*  int dp[n+1][10];
	    list<int> v[10];
	    It(v);
	    for(int i = 0;i<10;i++){
	        dp[0][i] = 0;
	        dp[1][i] = 1;
	    }
	    for(int i = 2;i<=n;i++){
	        for(int j = 0;j<10;j++){
	            list<int>::iterator it;
	            for(it = v[j].begin();it!=v[j].end();it++){
	                dp[i][j]+=dp[i-1][*it];
	            }
	        }
	    }
	    int ans = 0;
	     for(int i = 0;i<10;i++){
	        ans+= dp[n][i];
	    }
	    cout<<ans<<endl;
	}
	return 0;
}