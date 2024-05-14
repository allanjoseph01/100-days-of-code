#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		string s;
		cin >> s;
		int count=0;
		int count01=0;
		int i=0;
		while(i<s.length()){
			if(s[i]=='0' && count01==0){
				int j=i;
				int c=0;
				while(j<s.length()){
					if(s[j]=='0' && count01==0){
						c+=1;
						j+=1;
					}else if(s[j]=='0' && count01==1){
						break;
					}else if(s[j]=='1'){
						if(s[j+1]=='0'){
							count01+=1;
						}
						c+=1;
						j+=1;
					}
				}
				i+=c;
				count+=1;
			}else if(s[i]=='0' && count01==1){
				int h=0;
				int p=i;
				while(p<s.length()){
					if(s[p]=='0'){
						h+=1;
						p+=1;
					}else{
						break;
					}
				}
				i+=h;
				count+=1;
			}else if(s[i]=='1'){
				int a=i;
				int co=0;
				while(a<s.length()){
					if(s[a]=='1'){
						co+=1;
						a+=1;
					}else{
						break;
					}
				}
				i+=co;
				count+=1;
			}
		}
		cout << count << endl;
	}
}