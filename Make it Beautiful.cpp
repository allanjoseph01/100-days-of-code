#include<bits/stdc++.h>
using namespace std;
int arr[50];
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n;
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		int a=arr[0];
		int count=0;
		for(int j=0;j<n;j++){
			if(a==arr[j]){
				count+=1;
			}
		}
		if(count==n){
			cout << "NO" << endl;
		}else{
			cout << "YES" << endl;
			cout << arr[n-1] << " ";
			for(int k=0;k<n-1;k++){
				cout << arr[k] << " ";
			}
			cout << endl;
		}
	}
}