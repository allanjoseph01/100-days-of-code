#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int _=0;_<t;_++){
		int a,b,x,y,n;
		cin >> a >> b >> x >> y >> n;
		int da1=min(n,a-x);
		int db1=min(n-da1,b-y);
		long long ans1=static_cast<long long>(a-da1)*(b-db1);
		int db2=min(n,b-y);
		int da2=min(n-db2,a-x);
		long long ans2=static_cast<long long>(a-da2)*(b-db2);
		cout << min(ans1,ans2) << endl;
	}	
}