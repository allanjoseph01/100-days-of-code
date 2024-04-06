#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		long long a,b;
		cin >> a >> b;
		long long diff=abs(a-b);
		if(diff==0){
			cout << "0" << " " << "0" << endl;
		}else{
			long long mini=min(a%diff,diff-a%diff);
			cout << diff << " " << mini << endl;
		}
	}
}