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
	long long n,l;
	cin >> n >> l;
	for(int _=0;_<n;_++){
		cin >> arr[_];
	}
	sort(arr,arr+n);
	double maxi=max(double(arr[0]),double(l-arr[n-1]));
	for(int i=0;i<n-1;i++){
		double diff=((double(arr[i+1]-arr[i]))/2);
		maxi=max(maxi,diff);
	}
	cout << fixed << setprecision(10);
	cout << maxi;
}