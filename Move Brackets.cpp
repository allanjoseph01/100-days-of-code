#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n;
		cin >> n;
		stack<char>brackseq;
		string s;
		cin >> s;
		for(int i=0;i<n;i++){
			if(brackseq.empty() && s[i]==')'){
				continue;
			}else if((!brackseq.empty()) && s[i]==')'){
				if(brackseq.top()=='('){
					brackseq.pop();
				}
			}else{
				brackseq.push('(');
			}
		}
		int ans=0;
		while(!brackseq.empty()){
			ans+=1;
			brackseq.pop();
		}
		cout << ans << endl;
	}
}