#include<bits/stdc++.h>
using namespace std;
int arr[1000];
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n;
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		string ans="true";
		for(int j=1;j<n-1;j++){
			if(arr[j]>arr[j-1] && arr[j]>arr[j+1]){
				cout << "YES" << endl;
				cout << j << " " << j+1 << " " << j+2 << endl;
				ans="false";
				break;
			}
		}
		if(ans=="true"){
			cout << "NO" << endl;
		}
	}
}