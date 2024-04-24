#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int a,b,n,s;
		cin >> a >> b >> n >> s;
		int k=min(a,s/n);
		int sum=k*n;
		if(sum==s){
			cout << "YES" << endl;
		}else{
			int h=s-sum;
			if(h<=b){
				cout << "YES" << endl;
			}else{
				cout << "NO" << endl;
			}
		}
	}
}