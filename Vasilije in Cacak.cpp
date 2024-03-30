#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		long long n,k,x;
		cin >> n >> k >> x;
		if(x>=((k*(k+1))/2)){
			if(x<=(((n*(n+1))-((n-k)*(n-k+1)))/2)){
				cout << "YES" << endl;
			}else{
				cout << "NO" << endl;
			}
		}else{
			cout << "NO" << endl;
		}
	}
}