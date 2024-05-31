#include<bits/stdc++.h>
using namespace std;
int check(long long lst[],int s,int num,double b){
	int count=0;
	for(int i=0;i<s;i++){
		count+=(lst[i])/b;
	}
	return count>=num;
}
int main(){
	int n,k;
	cin >> n >> k;
	long long arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	sort(arr,arr+n);
	double l=1;
	double r=arr[n-1];
	double ans=-1;
	int iter=45;
	while(iter--){
		double mid=(l+r)/2;
		if(check(arr,n,k,mid)){
			ans=mid;
			l=mid+1;
		}else{
			r=mid-1;
		}
	}
	cout << fixed << setprecision(6);
	cout << ans << endl;
}