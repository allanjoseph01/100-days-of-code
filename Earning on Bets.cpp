#include<bits/stdc++.h>
using namespace std;
pair<bool,vector<long long>> check(int x[],long long to,int size){
	vector<long long>sup(size);
	long long sum=0;
	pair<bool,vector<long long>>sol2;
	for(int i=0;i<size;i++){
		sup[i]=(to+x[i]-1)/x[i];
		sum+=sup[i];
		if(sum>LLONG_MAX/2) {
            sol2.first=false;
            sol2.second={};
            return sol2;
        }
	}
	bool ans=true;
	for(int j=0;j<size;j++){
		if((x[j]*sup[j])<=sum){
			sol2.first=false;
			sol2.second=sup;
			return sol2;
		}
	}
	sol2.first=ans;
	sol2.second=sup;
	return sol2;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n;
		cin >> n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		long long high=LLONG_MAX/2;
		long long low=1;
		long long ans=-1;
		long long mid;
		pair<bool,vector<long long>>sol;
		vector<long long>ans2;
		while(low<=high){
			mid=low+(high-low)/2;
			sol=check(arr,mid,n);
			if(sol.first){
				high=mid-1;
				ans=mid;
				ans2=sol.second;
			}else{
				low=mid+1;
			}
		}
		if(ans==-1){
			cout << ans << endl;
		}else{
			for(int h=0;h<n;h++){
				cout << ans2[h] << " ";
			}
			cout << endl;
		}
	}
}
