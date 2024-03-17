#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n;
		cin >> n;
		int arr[n-1];
		for(int i=0;i<n-1;i++){
			cin >> arr[i];
		}
		int sum=0;
		for(int j=0;j<n-1;j++){
			sum+=((-1)*(arr[j]));
		}
		cout << sum << endl;
	}
}