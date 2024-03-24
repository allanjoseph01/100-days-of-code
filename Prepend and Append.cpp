#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n;
		cin >> n;
		string s;
		cin >> s;
		int i=0;
		int j=n-1;
		int count=n;
		while(j>i){
			if((s[i]=='0') && (s[j]=='1')){
				i+=1;
				j-=1;
				count-=2;
			}else if((s[i]=='1') && (s[j]=='0')){
				i+=1;
				j-=1;
				count-=2;
			}else{
				break;
			}
		}
		cout << count << endl;
	}
}