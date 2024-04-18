#include<bits/stdc++.h>
using namespace std;
int count(int lst[100],int t,int size,int st){
	int co=0;
	for(int i=st;i<size;i++){
		if(lst[i]==t){
			co+=1;
		}else{
			break;
		}
	}
	return co;
}
int arr[100];
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	bool ans=true;
	int j=0;
	sort(arr,arr+n);
	while(j<n){
		int c=count(arr,arr[j],n,j);
		j+=c;
		if(c>((n+1)/2)){
			ans=false;
			break;
		}
	}
	if(ans){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
}