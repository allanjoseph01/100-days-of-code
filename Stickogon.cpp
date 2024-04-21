#include<bits/stdc++.h>
using namespace std;
int countnum(int lst[],int start,int num,int end){
	int count=0;
	for(int i=start;i<end;i++){
		if(lst[i]==num){
			count+=1;
		}else{
			break;
		}
	}
	return count;
}
int arr[101];
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
		int j=0;
		int ans=0;
		while(j<n){
			int c=countnum(arr,j,arr[j] , n);
			if(c>=3){
				ans+=(c/3);
			}
			j+=c;
		}
		cout << ans << endl;
	}
}