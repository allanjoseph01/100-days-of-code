#include<bits/stdc++.h>
using namespace std;
bool substring(string a,string b){
	if(a.length()<b.length()){
		return false;
	}else{
		int j=0;
		int i=0;
		while(i<a.length()){
			if(b[0]!=a[i]){
				i+=1;
			}else{
				int y=i+1;
				while(i<a.length() && j<b.length()){
					if(a[i]==b[j]){
						i+=1;
						j+=1;
					}else{
						j=0;
						i=y;
						break;
					}
				}
				if(j==b.length()){
					return true;
				}
			}
		}
	}
	return false;
}
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n,m;
		cin >> n >> m;
		string x,s;
		cin >> x >> s;
		bool ans=substring(x,s);
		int count=0;
		while(!ans && (count<5)){
			x+=x;
			count+=1;
			ans=substring(x,s);
		}
		if(ans){
			cout << count << endl;
		}else{
			cout << "-1" << endl;
		}
	}
}