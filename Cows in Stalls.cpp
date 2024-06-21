#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
long long arr[10001];
long long n,k;
bool check(long long be) {
    int count=1;
    long long last=arr[0];
    int i=1;
    while(i<n){
        while(last+be>arr[i] && i<n){
        	i+=1;
		}
		if(i<n){
			last=arr[i];
			i++;
			count++;
		}
		if(count==k){
        	return true;
        }
    }
    return false;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> k;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	long long low=0;
	long long high=(arr[n-1]-arr[0]);
	long long mid;
	long long ans=0;
	while(low<=high){
		mid=(low+high)/2;
		if(check(mid)){
			low=mid+1;
			ans=mid;
		}else{
			high=mid-1;
		}
	}
	cout << ans << endl;
}