#include<bits/stdc++.h>
using namespace std;
int count(string str, int size){
	int count=0;
	for(int i=0;i<size;i++){
		if(str[i]=='1'){
			count+=1;
		}
	}
	return count;
}
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		string s;
		cin >> s;
		int len=s.size();
		int count1=count(s,len);
		int count0=len-count1;
		int ans=min(count1,count0);
		if(ans%2==0){
			cout << "NET" << endl;
		}else{
			cout << "DA" << endl;
		}
	}
}