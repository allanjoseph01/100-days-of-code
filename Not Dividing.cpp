#include <bits/stdc++.h>
using namespace std;
int arr[100000];
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n;
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		for(int j=0;j<n;j++){
			arr[j]+=1;
		}
		for(int k=1;k<n;k++){
			if(arr[k]%arr[k-1]==0){
				arr[k]+=1;
			}
		}
		for(int l=0;l<n;l++){
			cout << arr[l] << " ";
		}
		cout << endl;
	}
}