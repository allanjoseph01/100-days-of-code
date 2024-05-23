#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t ;
	for(int _=0;_<t;_++){
		int n,q;
		cin >> n >> q;
		vector<int>arr(n);
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		sort(arr.rbegin(),arr.rend());
		vector<long long> prefixsum(n);
		prefixsum[0]=arr[0];
		for(int i=1;i<n;i++){
			prefixsum[i]=prefixsum[i-1]+arr[i];
		}
		for(int j=0;j<q;j++){
			long long qu;
			cin >> qu;
			int high=n;
			int low=1;
			int mid;
			int ans=-1;
			while(low<=high){
				mid=(low+high)/2;
				if(prefixsum[mid-1]==qu){
					ans=mid;
					break;
				}else if(prefixsum[mid-1]>qu){
					ans=mid;
					high=mid-1;
				}else{
					low=mid+1;
				}
			}
			cout << ans << endl;
		}
	}
}