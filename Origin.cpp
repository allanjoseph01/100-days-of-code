#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    for(int _=0;_<t;_++){
        long long n;
        cin >> n;
        long long sum=0;
        long long x=n/9;
        long long y=n%9;
        sum+=(45*x);
        int diff=y;
        for(int i=1;i<=diff;i++){
            sum+=i;
        }
        cout << sum << endl;
    }
}
