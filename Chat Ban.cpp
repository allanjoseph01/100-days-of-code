#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
#define int long long
int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int k,x;
		cin >> k >> x;
		int totalm=(2*k)-1;
		int high=totalm;
		int low=1;
		int mid;
		int ans=1;
		while(low<=high){
			mid=(low+high)/2;
			int an=0;
			if(mid<=k){
				an+=((mid*(mid+1))/2);
			}else{
				an+=((k*(k+1))/2);
				int h=(k-(mid-k)-1);
				int l=(an-k)-((h*(h+1))/2);
				an+=l;
			}
			if(an==x){
				ans=mid;
				break;
			}else if(an>x){
				high=mid-1;
			}else{
				low=mid+1;
				ans=mid+1;
			}
		}
		cout << min(ans,totalm) << endl;
	}
}