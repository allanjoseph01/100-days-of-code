#include<bits/stdc++.h>
using namespace std;
bool check(double b,double q){
	return ((b*b)+sqrt(b)) <=q;
}
int main(){
	double c;
	cin >> c;
	double low=0;
	double high=c;
	double ans=1;
	int iter=55;
	while(iter--){
		double mid=(low+high)/2;
		if(check(mid,c)){
			ans=mid;
			low=mid;
		}else{
			high=mid;
		}
	}
	cout << fixed << setprecision(20);
	cout << ans << endl;
}