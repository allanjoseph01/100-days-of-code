#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n;
		cin >> n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		if(arr[0]==1){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}