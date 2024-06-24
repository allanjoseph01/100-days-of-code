#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
long long n;
bool check(long long be,vector<pair<long long,long long>>& vp){
	long long pos1=0,pos2=0;
	for(int i=0;i<n;i++){
		pos1=max(pos1-be,vp[i].first);
		pos2=min(pos2+be,vp[i].second);
		if(pos1>pos2){
			return false;
		}
	}
	return true;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		cin >> n;
		vector<pair<long long,long long>> ls(n);
		long long maxi=0;
		for(int i=0;i<n;i++){
			long long l,r;
			cin >> l >> r;
			ls[i]=make_pair(l,r);
			maxi=max(maxi,r);
		}
		long long high=maxi;
		long long low=0;
		long long mid;
		long long ans=0;
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
}