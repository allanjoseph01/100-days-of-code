#include<bits/stdc++.h>
using namespace std;
char paired(vector<pair<char,char>> lst,char k){
	for(int i=0;i<lst.size();i++){
		if(lst[i].first==k){
			return lst[i].second;
		}
	}
	return k;
}
int count(string str,char tar,int st){
	int co=0;
	for(int i=st;i<str.length();i++){
		if(str[i]!=tar){
			break;
		}
		co+=1;
	}
	return co;
}
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n;
		cin >> n;
		string s;
		cin >> s;
		string s2=s;
		sort(s.begin(),s.end());
		vector<pair<char,char>>mp;
		vector<char>diff;
		for(int i=0;i<n;){
			diff.push_back(s[i]);
			int c=count(s,s[i],i);
			i+=c;
		}
		int si;
		if(diff.size()%2==0){
			si=diff.size()/2;
		}else{
			si=(diff.size()/2)+1;
		}
		int j=diff.size()-1;
		for(int h=0;h<si;h++){
			mp.push_back(make_pair(diff[h],diff[j]));
			if(h==(si-1) && diff.size()%2==1){
				j-=1;
				continue;
			}
			mp.push_back(make_pair(diff[j],diff[h]));
			j-=1;
		}
		sort(mp.begin(),mp.end());
		for(int v=0;v<n;v++){
			s2[v]=paired(mp,s2[v]);
		}
		cout << s2 << endl;
	}
}