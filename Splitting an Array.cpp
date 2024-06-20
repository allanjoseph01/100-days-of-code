#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
long long arr[100000];
int n,k;
bool check(long long be){
	int j=0;
	int num=0;
	while(j<n){
		long long sumi=0;
		while((sumi+arr[j])<=be && j<n){
			sumi+=arr[j];
			j++;
		}
		num+=1;
	}
	return num<=k;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> k;
	long long maxi=0;
	long long sum=0;
	for(int i=0;i<n;i++){
		cin >> arr[i];
		maxi=max(maxi,arr[i]);
		sum+=arr[i];
	}
	long long low=maxi;
	long long high=sum;
	long long mid;
	long long ans=maxi;
	while(low<=high){
		mid=(low+high)/2;
		if(check(mid)){
			ans=mid;
			high=mid-1;
		}else{
			low=mid+1;
		}
	}
	cout << ans << endl;
}