#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
		int n,x;
		cin >> n >> x;
		int arr[n];
		for(int j=0;j<n;j++){
			cin >> arr[j];
		}
		int max1=2*(x-arr[n-1]);
		for(int j=0;j<n-1;j++){
			int s=arr[j+1]-arr[j];
			if(s>max1){
				max1=s;
			}
		}
		
		if(n==1){
			cout << max(max1,arr[0]) << endl;
		}else{
			int max2=arr[0]-0;
			cout << max(max1,max2) << endl;
		}
	}
}