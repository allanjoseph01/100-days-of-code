#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		string s;
		cin >> s;
		long long cost=0;
		int number1=0;
		for(int i=0;i<s.length();){
			if(s[i]=='0' && cost==0){
				i+=1;
			}else if(s[i]=='1' && cost==0){
				while(i<s.length() && s[i]!='0'){
					number1+=1;
					i+=1;
				}
				if(i==s.length()){
					break;
				}	
				cost+=(number1+1);
				i+=1;
			}else if(s[i]=='0' && cost!=0){
				cost+=(number1+1);
				i+=1;
			}else if(s[i]=='1' && cost!=0){
				while(i<s.length() && s[i]!='0'){
					number1+=1;
					i+=1;
				}
				if(i==s.length()){
					break;
				}
				cost+=(number1+1);
				i+=1;
			}
		}
		cout << cost << endl;
	}
}