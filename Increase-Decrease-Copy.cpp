#include<bits/stdc++.h>
using namespace std;
long long solve(long long l,vector<long long>& v1,vector<long long>& v2,int si){
	long long mini=INT_MAX;
	for(int i=0;i<si;i++){
		if((v1[i]>l && v2[i]<l) || (v1[i]<l && v2[i]>l)){
			return 0;
		}
		if(v1[i]==l || v2[i]==l){
			return 0;
		}
		if(v1[i]>l && v2[i]>l){
			mini=min(mini,min(v1[i],v2[i])-l);
		}
		if(v1[i]<l && v2[i]<l){
			mini=min(mini,l-max(v1[i],v2[i]));
		}
	}
	return mini;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n;
		cin >> n;
		vector<long long>arr1(n);
		for(int i=0;i<n;i++){
			cin >> arr1[i];
		}
		vector<long long>arr2(n+1);
		for(int i=0;i<n+1;i++){
			cin >> arr2[i];
		}
		long long count=1;
		for(int j=0;j<n;j++){
			count+=(abs(arr1[j]-arr2[j]));
		}
		count+=solve(arr2[n],arr1,arr2,n);
		cout << count << endl;
	}
}