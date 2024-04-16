#include<bits/stdc++.h>
using namespace std;
string small[3000];
string large[3000];
int main(){
	int n,m;
	cin >> n >> m;
	for(int i=0;i<m;i++){
		string a,b;
		cin >> a >> b;
		int s1=a.size();
		int s2=b.size();
		if(s1<=s2){
			small[i]=a;
			large[i]=b;
		}else{
			small[i]=b;
			large[i]=a;
		}
	}
	vector <string> output;
	for(int i=0;i<n;i++){
		string s;
		cin >> s;
		for(int j=0;j<m;j++){
			if(small[j]==s || large[j]==s){
				output.push_back(small[j]);
				break;
			}
		}
	}
	int size=output.size();
	for(int k=0;k<size;k++){
		cout << output[k] << " ";
	}
}