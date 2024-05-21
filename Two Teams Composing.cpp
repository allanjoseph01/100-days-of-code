#include<bits/stdc++.h>
using namespace std;
int count(int lst[],int tar,int index,int size){
	int co=0;
	for(int i=index;i<size;i++){
		if(lst[i]!=tar){
			return co;
		}
		co+=1;
	}
	return co;
}
int solve(int arr[],int size){
	if(size==1){
		return 0;
	}
	if(size==2){
		return 1;
	}
	int maxi=0;
	int count1=0;
	for(int j=0;j<size;){
		int c=count(arr,arr[j],j,size);
		j+=c;
		count1+=1;
		maxi=max(maxi,c);
	}
	if(maxi==1){
		return 1;
	}
	return max(min(maxi-1,count1),min(maxi,count1-1));
}
int arr[200000];
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n;
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		sort(arr,arr+n);
		int ans=solve(arr,n);
		cout << ans << endl;
	}
}