#include<bits/stdc++.h>
using namespace std;
int arr[100];
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n;
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		sort(arr,arr+n);
		int count=0;
		int j=0;
		while(arr[j]==arr[0] && j<n){
			count+=1;
			j+=1;
		}
		if(count==n){
			cout << "-1" << endl;
		}else{
			cout << count << " " << n-count << endl;
			for(int k=0;k<count;k++){
				cout << arr[k] << " ";
			}
			cout << endl;
			for(int m=count;m<n;m++){
				cout << arr[m] << " ";
			}
			cout << endl;
		}
	}
}