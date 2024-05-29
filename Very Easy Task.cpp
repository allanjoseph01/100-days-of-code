#include<bits/stdc++.h>
using namespace std;
long long solve(long long t,int a,int b){
	long long low=0;
	long long high=10000000000;
	long long mid;
	long long ans=0;
	while(low<=high){
		mid=(low+high)/2;
		if(((mid/a)+(mid/b))>=t){
			ans=mid;
			high=mid-1;
		}else{
			low=mid+1;
		}
	}
	return ans;
}
int main(){
	long long n;
	int x,y;
	cin >> n >> x >> y;
	long long ans=min(x,y);
	ans+=(solve(n-1,x,y));
	cout << ans << endl;
}