#include<bits/stdc++.h>
using namespace std;
bool present(int lst[],int l,int num,int s){
	int index=max(-1,l-s);
	for(int i=l;i>index;i--){
		if(lst[i]!=num){
			return false;
		}
	}
	return true;
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
		long long sub=1;
		int num=arr[n-1];
		int j=n-2;
		int count=0;
		while(j>=0 && sub<n){
			if(arr[j]==num){
				sub++;
				j--;
				continue;
			}
			bool ans=present(arr,j,num,sub);
			j-=sub;
			if(!ans){
				count+=1;
			}
			sub*=2;
		}
		cout << count << endl;
	}
}