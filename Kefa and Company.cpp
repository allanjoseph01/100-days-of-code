#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
long long ff(vector<pair<long long,long long>>& lst,int index,long long minmo,long long size,vector<long long>&presum){
	int low=index;
	int high=size-1;
	int mid;
	int ans=index;
	while(low<=high){
		mid=(low+high)/2;
		if((lst[mid].first-lst[index].first)<minmo){
			low=mid+1;
			ans=mid;
		}else{
			high=mid-1;
		}
	}
	long long sum=0;
	if(index==0){
		sum+=presum[ans];
	}else{
		sum+=(presum[ans]-presum[index-1]);
	}
	return sum;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n,d;
	cin >> n >> d;
	vector<pair<long long,long long>> arr;
	vector<long long>arr2(n);
	for(int i=0;i<n;i++){
		long long m,s;
		cin >> m >> s;
		arr.push_back(make_pair(m,s));
	}
	sort(arr.begin(),arr.end());
	arr2[0]=arr[0].second;
	for(int k=1;k<n;k++){
		arr2[k]=arr2[k-1]+arr[k].second;
	}
	long long ans=0;
	for(int j=0;j<n;j++){
		ans=max(ans,ff(arr,j,d,n,arr2));
	}
	cout << ans << endl;
}