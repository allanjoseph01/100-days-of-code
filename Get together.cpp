#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
bool check(double be,vector<pair<double,double>>& vp,int size){
	double mini=(vp[0].first)+(vp[0].second*be);
	double maxi=(vp[0].first)-(vp[0].second*be);
	for(int i=1;i<size;i++){
		mini=min(mini,((vp[i].first)+(vp[i].second*be)));
		maxi=max(maxi,((vp[i].first)-(vp[i].second*be)));
	}
	return mini>=maxi;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<pair<double,double>>ds;
	for(int i=0;i<n;i++){
		long long x,v;
		cin >> x >> v;
		ds.push_back(make_pair(x,v));
	}
	double high=INT_MAX;
	double low=0;
	double mid;
	double ans=0;
	int iter=100;
	while(iter--){
		mid=(low+high)/double(2);
		if(check(mid,ds,n)){
			ans=mid;
			high=mid;
		}else{
			low=mid;
		}
	}
	cout << fixed << setprecision(6);
	cout << ans << endl;
}