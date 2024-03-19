#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int m;
	if(arr[0]<0){
		m=arr[0]*(-1);
	}else{
		m=arr[0];
	}
	for(int j=0;j<n;j++){
		if(arr[j]<0){
			if(((-1)*arr[j])<m){
			m=(-1)*arr[j];
			}
		}else if(arr[j]<m){
			m=arr[j];
		}
	}
	cout << m;
}