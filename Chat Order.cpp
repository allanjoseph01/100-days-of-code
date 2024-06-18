#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
string arr[2000000];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	map<string,int>ans;
	for(int j=0;j<n;j++){
		if(ans.find(arr[j])==ans.end()){
			ans.insert(pair<string,int>(arr[j],j+1));
		}else{
			ans[arr[j]]=j+1;
		}
	}
	vector<pair<int,string>> ans2;
	for(auto& it : ans){
		ans2.push_back(make_pair(it.second,it.first));
	}
	sort(ans2.begin(),ans2.end());
	for(int k=ans2.size()-1;k>=0;k--){
		cout << ans2[k].second << endl;
	}
}