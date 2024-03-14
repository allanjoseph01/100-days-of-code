#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
		int n,k;
		cin >> n >> k;
		int arr[n];
		for(int j=0;j<n;j++){
			cin >> arr[j];
		}
		if(k>=2){
			cout << "YES" << endl;
		}else{
			int arr1[n];
			for(int j=0;j<n;j++){
				arr1[j]=arr[j];
			}
			sort(arr,arr+n);
			bool issorted=true;
			for (int j=0;j<n;j++) {
                if (arr1[j] != arr[j]) {
                    issorted = false;
                    break;
                }
            }
            if(issorted){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
		}
	}
}