#include<bits/stdc++.h>
using namespace std;
int countpat(string s,char p, int pos,int size){
	int count=0;
	for(int i=pos;i<size;i++){
		if(s[i]==p){
			count+=1;
		}else{
			break;
		}
	}
	return count;
}
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n;
		cin >> n;
		string str;
		cin >> str;
		int maxpat=0;
		int i=0;
		while(i<n){
			int g=countpat(str,str[i],i,n);
			maxpat=max(g,maxpat);
			i+=g;
		}
		cout << (maxpat+1) << endl;
	}
}