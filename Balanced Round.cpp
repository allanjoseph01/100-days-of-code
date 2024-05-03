#include<bits/stdc++.h>
using namespace std;
int arr[200000];
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n,k;
		cin >> n >> k;
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		sort(arr,arr+n);
		int longsubarray=1;
		int ans=1;
		for(int j=1;j<n;j++){
			if(arr[j]-arr[j-1]<=k){
				longsubarray+=1;
			}else{
				longsubarray=1;
			}
			ans=max(ans,longsubarray);
		}
		cout << n-ans << endl;
	}
}