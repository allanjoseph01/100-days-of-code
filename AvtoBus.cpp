#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		long long n;
		cin >> n;
		if(n%2==1 || n<4){
			cout << "-1" << endl;
		}else{
			if(n%6==0){
				cout << n/6 << " ";
			}else{
				cout << n/6 + 1 << " ";
			}
			cout << n/4 << endl;
		}
	}
}