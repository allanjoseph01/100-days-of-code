#include<bits/stdc++.h>
using namespace std;
int k,n;
long long sum;
bool check(long long b,long long lst[]){
	sum=0;
	for(int i=0;i<n;i++){
		sum+=(min(lst[i],b));
		if(sum>=b*k){
            return true;
        }
	}
	return sum>=(b*k);
}
int main(){
	cin >> k >> n;
	long long arr[n];
	long long sumt=0;
	for(int i=0;i<n;i++){
		cin >> arr[i];
		sumt+=(arr[i]);
	}
	long long high=sumt/k;
	long long low=0;
	long long mid;
	long long ans=0;
	while(low<=high){
		mid=low+((high-low)/2);
		if(check(mid,arr)){
			ans=mid;
			low=mid+1;
		}else{
			high=mid-1;
		}
	}
	cout << ans << endl;
}