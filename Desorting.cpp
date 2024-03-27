#include<bits/stdc++.h>
using namespace std;
int arr[500];
int arr1[500];
int arr2[500];
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n;
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		for(int h=0;h<n;h++){
			arr2[h]=arr[h];
		}
		sort(arr2,arr2+n);
		int r;
		for(r=0;r<n;r++){
			if(arr2[r]!=arr[r]){
				break;
			}
		}
		if(r<n-1){
			cout << "0" << endl;
		}else{
			int k=0;
			int mini=arr[1]-arr[0];
			for(int j=0;j<n-1;j++){
				arr1[k]=(arr[j+1]-arr[j]);
				if((arr[j+1]-arr[j])<mini){
					mini=(arr[j+1]-arr[j]);
				}
				k+=1;
			}
			int ans=(mini/2)+1;
			cout << ans << endl;
		}	
	}
}