#include<bits/stdc++.h>
using namespace std;
vector<pair<int,string>> scores(vector<pair<int,string>>vecpair,string str){
	int size=vecpair.size();
	bool ans=false;
	for(int i=0;i<size;i++){
		if(vecpair[i].second==str){
			vecpair[i].first+=1;
			ans=true;
		}
	}
	if(ans==false){
		vecpair.push_back(make_pair(1,str));
	}
	return vecpair;
}
int main(){
	int n;
	cin >> n;
	vector<pair<int,string>>teamscore;
	for(int i=0;i<n;i++){
		string tname;
		cin >> tname;
		teamscore=scores(teamscore,tname);
	}
	sort(teamscore.begin(),teamscore.end());
	int s=teamscore.size();
	cout << teamscore[s-1].second << endl;
}