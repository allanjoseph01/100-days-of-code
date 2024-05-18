#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int arr[3];
		for(int i=0;i<3;i++){
			cin >> arr[i];
		}
		sort(arr,arr+3);
		int sum=arr[0]+arr[1]+arr[2];
		if((sum)%9!=0){
			cout << "NO" << endl;
		}else if(arr[0]<((sum)/9)){
			cout << "NO" << endl;
		}else{
			cout << "YES" << endl;
		}
	}
}