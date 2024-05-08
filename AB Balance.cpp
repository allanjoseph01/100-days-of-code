#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		string s;
		cin >> s;
		if(s[0]==s[s.size()-1]){
			cout << s << endl;
		}else{
			cout << s[s.size()-1] << "";
			for(int i=1;i<s.size();i++){
				cout << s[i] << "";
			}
			cout << endl;
		}
	}
}