#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, t;
    cin >> n >> t;
    vector<int>arr(n);
    for(int k=0;k<n;k++){
    	cin >> arr[k];
	}
    int rem=0;
    int s=0;
    int ans=0;
    for(int i=0;i<n;i++){
        while(rem<n && s+arr[rem]<=t){
            s+=arr[rem];
            rem++;
        }
        ans=max(ans,rem-i);
        s-=arr[i];
    }
    cout << ans << endl;
    return 0;
}