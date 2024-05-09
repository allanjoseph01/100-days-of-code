#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
	    int n;
	    cin >> n;
	    vector<int>arr(n);
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    int arr1[n];
	    arr1[0]=arr[0];
	    for(int a=1;a<n;a++){
	        arr1[a]=arr[a]+arr1[a-1];
	    }
	    int q;
	    cin >> q;
	    for(int j=0;j<q;j++){
	        int q1,q2;
	        cin >> q1 >> q2;
	        if(q1>1){
	            cout << arr1[q2-1]-arr1[q1-2] << '\n';
	        }else{
	            cout << arr1[q2-1] << '\n';
	        }
	    }
	}
}