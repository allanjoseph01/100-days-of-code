#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
long long arr[1000];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		long long n,k;
		cin >> n >> k;
		long long mul=ceil(double(k)/double(n-1))-1;
		long long rem=k-((n-1)*mul);
		cout << (n*mul)+rem << endl;
	}
}
  