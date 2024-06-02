#include<bits/stdc++.h>
using namespace std;
int arr[200000];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n;
		long long x;
		cin >> n >> x;
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		long long high=INT_MAX;
		long long low=1;
		long long mid;
		long long ans;
		while(low<=high){
			mid=(low+high)/2;
			long long count=0;
			for(int j=0;j<n;j++){
				if(mid>arr[j]){
					count+=(mid-arr[j]);
				}
			}
			if(count<=x){
				ans=mid;
				low=mid+1; 
			}else{
				high=mid-1;
			}
		}
		cout << ans << endl;
	}
}