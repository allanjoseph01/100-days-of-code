#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>& item,int b,string pe,string du){
	string ach="";
	vector<int>se;
	for(int i=b+1;i<item.size();i++){
		se.push_back(item[i]);
	}
	sort(se.begin(),se.end());
	for(int i=0;i<se.size();i++){
		ach.push_back(pe[se[i]-1]);
	}
	int j=0;
	for(int k=0;k<ach.length();k++){
		if(ach[k]==du[j]){
			j+=1;
		}
		if(j>=du.size()){
			return true;
		}
	}
	if(j>=du.size()){
		return true;
	}
	return false;
}
int main(){
	string t,p;
	cin >> t >> p;
	vector<int>del;
	for(int i=0;i<t.length();i++){
		int a;
		cin >> a;
		del.push_back(a);
	}
	int high=t.length();
	int low=0;
	int ans=0;
	int mid;
	while(low<=high){
		mid=(low+high)/2;
		if(check(del,mid,t,p)){
			ans=mid+1;
			low=mid+1;
		}else{
			high=mid-1;
		}
	}
	cout << ans << endl;
}