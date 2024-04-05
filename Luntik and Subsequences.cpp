#include<bits/stdc++.h>
using namespace std;
int arr[60];
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n;
		cin >> n;
		int count1=0;
		int count0=0;
		for(int i=0;i<n;i++){
			cin >> arr[i];
			if(arr[i]==0){
				count0+=1;
			}
			if(arr[i]==1){
				count1+=1;
			}
		}
		long long result=1;
		while(count0!=0){
        result*=2;
        --count0;
    	}
    	long long ans=result*count1;
    	cout << ans << endl;
	}
}