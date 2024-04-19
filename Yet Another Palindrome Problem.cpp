#include<bits/stdc++.h>
using namespace std;
int count(int lst[5001],int num,int size,int st){
	int co=0;
	for(int i=st;i<size;i++){
		if(lst[i]==num){
			co+=1;
		}
	}
	return co;
}
int arr[5001];
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n;
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		string ans="NO";
		for(int j=0;j<n;j++){
			int c=count(arr,arr[j],n,j);
			if(c>=3){
				ans="YES";
				break;
			}else if(c==2){
				if(arr[j]!=arr[j+1]){
					ans="YES";
					break;
				}
			}
		}
		cout << ans << endl;
	}
}