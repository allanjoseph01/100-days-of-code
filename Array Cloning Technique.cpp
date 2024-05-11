#include<bits/stdc++.h>
using namespace std;
int count(int lst[],int num,int size,int pos){
	int co=0;
	for(int i=pos;i<size;i++){
		if(lst[i]==num){
			co+=1;
		}else{
			break;
		}
	}
	return co;
}
int arr[100000];
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n;
		cin >> n;
		for(int j=0;j<n;j++){
			cin >> arr[j];
		}
		int maxi=0;
		sort(arr,arr+n);
		for(int i=0;i<n;){
			int c=count(arr,arr[i],n,i);
			maxi=max(maxi,c);
			i+=c;
		}
		int ans=0;
		while(maxi<n){
			int d=min(maxi,n-maxi);
			ans+=(d+1);
			maxi+=d;
		}
		cout << ans << endl;
	}
}