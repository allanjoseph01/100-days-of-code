#include<bits/stdc++.h>
using namespace std;
int sumarray[2000000];
int sumse(int st,int end){
	return sumarray[end]-sumarray[st];
}
int arr[2000000];
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n,q;
		cin >> n >> q;
		for(int i=0;i<n;i++){
			cin >> arr[i];
			if(i==0){
				sumarray[i]=arr[i];
			}else{
				sumarray[i]=sumarray[i-1]+arr[i];
			}
		}
		sumarray[n]=sumarray[n-1];
		for(int $=0;$<q;$++){
			int l,r,k;
			cin >> l >> r >> k;
			long long sumq=k*(r-l+1);
			long long sump=sumarray[l-2];
			long long sums=sumse(r-1,n-1);
			long long ans=sumq+sump+sums;
			if(ans%2==0){
				cout << "NO" << endl;
			}else{
				cout << "YES" << endl;
			}
		}	
	}
}