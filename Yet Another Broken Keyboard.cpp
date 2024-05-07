#include<bits/stdc++.h>
using namespace std;
long long countsum(int num){
	long long s=1LL*(num*1LL*(num+1))/2;
	return s;
}
int main(){
	int n,k;
	cin >> n >> k;
	string s;
	cin >> s;
	int goodkey[26];
	for(int d=0;d<26;d++){
		goodkey[d]=0;
	}
	for(int _=0;_<k;_++){
		char q;
		cin >> q;
		goodkey[int(q)-97]=1;
	}
	vector<int>index;
	for(int z=0;z<s.length();z++){
		if(goodkey[int(s[z])-97]==0){
			index.push_back(z);
		}
	}
	if(index.size()>0){
		long long sum=0;
		for(int r=0;r<index.size();r++){
    		if(r > 0){
        		sum+=countsum(index[r]-(index[r-1]+1));
        	}
    		else{
        		sum+=countsum(index[r]);
			}
		}
		if(index[index.size()-1]<s.length()-1){
			sum+=countsum((s.length()-1)-index[index.size()-1]);
		}
		cout << sum << endl;
	}else{
		long long ans=countsum(n);
		cout << ans << endl;
	}
}