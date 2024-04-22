#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		string str;
		cin >> str;
		if(str.size()%2==0 && str[0]!=')' && str[str.size()-1]!='('){
			cout << "YES" << endl;
		}	
    	else{
    		cout << "NO" << endl;
    	}
	}
}