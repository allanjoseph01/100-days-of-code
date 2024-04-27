#include<bits/stdc++.h>
using namespace std;
int count(int lst[100],int num,int st,int size){
	int count=0;
	for(int i=st;i<size;i++){
		if(lst[i]==num){
			count+=1;
		}else{
			break;
		}
	}
	return count;
}
int arr[100];
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
		int j=0;
		int maxi=0;
		while(j<n){
			int c=count(arr,arr[j],j,n);
			maxi=max(maxi,c);
			j+=c;
		}
		if(maxi>=k){
			cout << k-1 << endl;
		}else{
			cout << n << endl;
		}
	}
}