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
		int j=0;
		int maxi=0;
		while(j<n){
			if(arr[j]==1){
				j+=1;
			}else{
				int y=j;
				int count=0;
				while(arr[y]==0 && y<n){
					count+=1;
					y+=1;
				}
				if(count>maxi){
					maxi=count;
				}
				j+=count;
				count=0;
			}
		}
		cout << maxi << endl;
	}
}