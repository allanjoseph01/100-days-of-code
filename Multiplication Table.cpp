#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
long long n,k;
bool check(long long be){
	long long count=0;
	for(int i=1;i<=n;i++){
		if(i<=be){
			count+=(min(n,be/i));
		}else{
			break;
		}
	}
	return count>=(k+1);
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> k;
	long long low=1;
	long long high=n*n;
	long long mid;
	long long ans=high;
	while(low<=high){
		mid=low+((high-low)/2);
		if(check(mid)){
			high=mid-1;
			ans=mid;
		}else{
			low=mid+1;
		}
	}
	cout << ans << endl;
}