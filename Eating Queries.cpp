#include<bits/stdc++.h>
using namespace std;
int lbound(vector<int>are,int tar){
	int high=are.size()-1;
	int low=0;
	int mid;
	int ans=-1;
	while(low<=high){
		mid=(low+high)/2;
		if(are[mid]<=tar){
			ans=mid;
			low=mid+1;
		}else if(are[mid]>tar){
			high=mid-1;
		}
	}
	return ans;
}
int solve(vector<int> lst,long long s){
	long long a=s;
	int count=0;
	while(true){
		int bi=lbound(lst,a);
		a-=lst[bi];
		count+=1;
		if(a<=0){
			return count;
		}
		if(lst[bi]==0 || bi==-1){
			break;
		}
		lst[bi]=0;
		sort(lst.begin(),lst.end());
	}
	return -1;
}
int main(){
	int t;
	cin >> t ;
	for(int _=0;_<t;_++){
		int n,q;
		cin >> n >> q;
		vector<int>arr(n);
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		sort(arr.begin(),arr.end());
		for(int j=0;j<q;j++){
			long long qu;
			cin >> qu;
			vector<int>arr2=arr;
			cout << solve(arr2,qu) << endl;
		}
	}
}