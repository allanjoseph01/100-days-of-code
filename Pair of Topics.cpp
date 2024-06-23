#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
long long a[200001];
long long b[200001];
int n;
long long bs(vector<pair<long long,long long>>& vp,int index){
	int low=index+1;
	int high=n-1;
	int mid;
	int ans=index;
	while(low<high){
		mid=(low+high)/2;
		if(((vp[mid].first-vp[mid].second)+(vp[index].first-vp[index].second)) > 0){
			ans=mid;
			high=mid-1;
		}else{
			low=mid+1;
		}
	}
	if(ans==index){
		return 0;
	}
	return n-ans;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		cin >> b[i];
	}
	vector<pair<long long,long long>> ab;
	for(int j=0;j<n;j++){
		ab.push_back(make_pair(a[j],b[j]));
	}
	sort(ab.begin(),ab.end());
	for(int j=0;j<n-1;j++){
		ab[j].first=ab[j].first+ab[j+1].first;
		ab[j].second=ab[j].second+ab[j+1].second;
	}
	ab[n-1].first=ab[n-2].first;
	ab[n-2].second=ab[n-2].second;
	long long ans=0;
	for(int k=0;k<n-1;k++){
		ans+=(bs(ab,k));
	}
	cout<<ans<<endl;
}