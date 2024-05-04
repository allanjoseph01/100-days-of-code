#include<bits/stdc++.h>
using namespace std;
bool arraycolor(vector<pair<string,int>>vecpair){
	if(vecpair[0].second==0 && vecpair[1].second%2==0){
		return true;
	}
	if(vecpair[1].second==0 && vecpair[0].second%2==0){
		return true;
	}
	if(vecpair[1].second%2==0){
		return true;
	}
	return false;
}
int arr[50];
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n;
		cin >> n;
		vector<pair<string,int>>oddeve;
		oddeve.push_back(make_pair("Even",0));
		oddeve.push_back(make_pair("Odd",0));
		for(int i=0;i<n;i++){
			cin >> arr[i];
			oddeve[arr[i]%2].second+=1;
		}
		bool ans=arraycolor(oddeve);
		if(ans){
			cout << "YES" << endl;
 		}else{
 			cout << "NO" << endl;
		 }
	}
}