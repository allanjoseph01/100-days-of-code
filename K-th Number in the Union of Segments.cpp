#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
long long n,k;
bool check(long long be,vector<pair<long long,long long>>& vp){
	long long count=0;
	for(int i=0;i<n;i++){
		if(vp[i].first<=be){
			count+=((min(vp[i].second,be)-vp[i].first)+1);
		}
	}
	return count>=(k+1);
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> k;
	vector<pair<long long,long long>>ls(n);
	long long l1,r1;
	cin>>l1>>r1;
	long long low=l1;
	long long high=r1;
	ls[0]=make_pair(l1,r1);
	for(int i=1;i<n;i++){
		long long l,r;
		cin>> l >> r;
		low=min(low,l);
		high=max(high,r);
		ls[i]=make_pair(l,r);
	}
	long long mid;
	long long ans=high;
	while(low<=high){
		mid=low+((high-low)/2);
		if(check(mid,ls)){
			high=mid-1;
			ans=mid;
		}else{
			low=mid+1;
		}
	}
	cout << ans << endl;
}