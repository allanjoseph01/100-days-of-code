#include<bits/stdc++.h>
using namespace std;
long long lbound(long long lst[],long long target,long long size){
	long long high=size;
	long long low=0;
	long long mid;
	long long ans;
	while(low<=high){
		mid=(low+high)/2;
		if(lst[mid]==target){
			return mid;
		}
		if(lst[mid]>target){
			high=mid-1;
		}else if(lst[mid]<target){
			ans=mid;
			low=mid+1;
		}
	}
	return ans;
}
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n,k,q;
		cin >> n >> k >> q;
		long long dist[k+1],time[k+1];
		dist[0]=0;
		time[0]=0;
		for(long long i=1;i<=k;i++){
			cin >> dist[i];
		}
		for(long long j=1;j<=k;j++){
			cin >> time[j];
		}
		long long query[q];
		for(long long h=0;h<q;h++){
			cin >> query[h];
		}
		for(long long p=0;p<q;p++){
			long long index=lbound(dist,query[p],k);
			if(dist[index]==query[p]){
				cout << time[index] << " ";
			}else{
				long long ans=time[index]+(query[p]-dist[index])*(double)(time[index+1]-time[index])/(dist[index+1]-dist[index]);
				cout << ans << " ";
			}
		}
		cout << endl;
	}
}