#include<bits/stdc++.h>
using namespace std;
int arr[100000];
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n,x;
		cin >> n >> x;
		long long maxi=0;
		for(int i=0;i<n;i++){
			cin >> arr[i];
			float a = static_cast<float>(arr[i]) / x;
			maxi+=ceil(a);
		}
		long long sum=0;
		for(int j=0;j<n;j++){
			sum+=arr[j];
		}
		long long mini=(ceil(static_cast<float>(sum)/x));
		cout << mini << " " << maxi << endl;	
	}
}