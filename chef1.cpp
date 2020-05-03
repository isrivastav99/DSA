#include<iostream>
#include<set>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, s;
		cin>>n>>s;
		int* c= new int[n];
		int* p =new int[n];
		//int c[n],p[n];
		set<int> d, f;
		for(int i = 0;i<n;i++){
			cin>>c[i];
		} 
		for(int i = 0;i<n;i++){
			cin>>p[i];
			if(p[i] == 0)
				d.insert(c[i]);
			else
				f.insert(c[i]);
		}
		bool ans = false;

		if(d.size() == 0 || f.size() == 0){
			
		}
		else{
			int av = 100-s;

			auto it1 = d.begin();
			auto it2 = f.begin();
			if(*it1+*it2 <=av)
				ans = true;
		}
		if(ans)
			cout<<"yes";
		else
			cout<<"no";
		cout<<endl;
	}
	return 0;
}
