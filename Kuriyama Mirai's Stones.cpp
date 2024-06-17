#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
long long prefixsum(long long lst[],int st,int end){
	long long sum=lst[end-1];
	long long mi;
	if(st==1){
		mi=0;
	}else{
		mi=lst[st-2];
	}
	return sum-mi;
}
long long arr[100000];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	long long arr2[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
		arr2[i]=arr[i];
	}
	sort(arr2,arr2+n);
	long long arr3[n],arr4[n];
	arr3[0]=arr[0];
	arr4[0]=arr2[0];
	for(int j=1;j<n;j++){
		arr3[j]=arr3[j-1]+arr[j];
		arr4[j]=arr4[j-1]+arr2[j];
	}
	int m;
	cin >> m;
	for(int _=0;_<m;_++){
		int type,l,r;
		cin >> type >> l >> r;
		long long ans;
		if(type==1){
			ans=prefixsum(arr3,l,r);
		}else{
			ans=prefixsum(arr4,l,r);
		}
		cout << ans << endl;
	}
}