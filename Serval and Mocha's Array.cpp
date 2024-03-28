#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if (a == 0)
        return b;
    return gcd(b % a, a);
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
		string ans="NO";
		int j;
		for(j=0;j<n-1;j++){
			for(int k=1;k<n;k++){
				if(gcd(arr[j],arr[k])<=2){
					ans="YES";
					break;
				}
			if(ans=="YES"){
				break;
			}
			}
		}
		cout << ans << endl;
	}
}