#include<bits/stdc++.h>
using namespace std;
int arr[100];
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int a,b,n;
		cin >> a >> b >> n;
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		sort(arr,arr+n);
		int j=0;
		long long count=0;
		while(j<n){
			if(b==1){
				b=min(a,b+arr[j]);
				count+=1;
				b-=1;
				j+=1;
			}else{
				count+=(b-1);
				b=1;
			}
		}
		count+=b;
		cout << count << endl;
	}
}