#include<bits/stdc++.h>
using namespace std;
bool check(int lst[],int size,long long space,long long card){
	__int128 sum=0;
	for(int i=0;i<size;i++){
		sum+=(((2*space)+lst[i])*((2*space)+lst[i]));
		if(sum>card){
            return false;
        }
	}
	return sum<=card;
}
int arr[200000];
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		long long c;
		int n;
		cin >> n >> c;
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		long long high=sqrt(c);
		long long low=0;
		long long mid;
		long long ans=0;
		while(low<=high){
			mid=(low+high)/2;
			if(check(arr,n,mid,c)){
				low=mid+1;
				ans=mid;
			}else{
				high=mid-1;
			}
		}
		cout << ans << endl;
	}
}