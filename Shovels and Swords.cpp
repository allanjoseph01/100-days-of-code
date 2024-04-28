#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int a,b;
		cin >> a >> b;
		int count=min(a,b);
		count=min(count,(a+b)/3);
		cout << count << endl;
	}
}