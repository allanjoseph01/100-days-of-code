#include<bits/stdc++.h>
using namespace std;
int lbound(long long lst[],int s,int tar){
	int low=0;
	int high=s-1;
	int mid;
	int ans=-1;
	while(low<=high){
		mid=(low+high)/2;
		if(lst[mid]<=tar){
			ans=mid;
			low=mid+1;
		}else{
			high=mid-1;
		}
	}
	return ans;
}
int main(){
	int t;
	cin >> t;
	long long arr[32];
	arr[0]=1;
	for(int i=1;i<32;i++){
		arr[i]=2*arr[i-1];
	}
	for(int _=0;_<t;_++){
		int n;
		cin >> n;
		vector<int>ans(32, 0);
		while(n!=0){
			int c=lbound(arr,32,n);
			n-=(arr[c]);
			ans[c]=1;
		}
		int maxi=0;
		for(int j=0;j<32;){
			if(ans[j]==0){
				j+=1;
			}else if(ans[j]==1 && ans[j+1]==1){
				ans[j]=-1;
				j+=1;
				while(ans[j]==1){
					ans[j]=0;
					j+=1;
				}
				ans[j]=1;
				maxi=j;
			}else{
				maxi=j;
				j+=1;
			}
		}
		cout << maxi+1 << endl;
		for(int i=0;i<=maxi;i++){
			cout << ans[i] << " ";
		}
		cout << endl;
	}
}