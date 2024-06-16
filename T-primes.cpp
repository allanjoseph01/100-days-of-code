#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
long long arr[100000];
bool prime[1000001];
bool tprime(long long num){
	long long root=sqrt(num);
	return root*root==num && prime[root];
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	prime[0]=prime[1]=false;
	for(int j=2;j<1000001;j++){
		prime[j]=true;
	}
	for(int i=2;i*i<1000001;i++){
		if(prime[i]){
			for(int j=i*i;j<1000001;j+=i){
				prime[j]=false;
			}
		}
	}
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	for(int j=0;j<n;j++){
		if(tprime(arr[j])){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}