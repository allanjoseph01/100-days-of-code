#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<pair<int,int>>vecPair;
	for(int i=0;i<n;i++){
		int a,b;
		cin >> a >> b;
		vecPair.push_back(make_pair(a,b));
	}
	sort(vecPair.begin(), vecPair.end());
	int j;
	for(j=0;j<n-1;j++){
		if(((vecPair[j].second)>(vecPair[j+1].second)) && ((vecPair[j].first)!=(vecPair[j+1].first))){
			break;
		}
	}
	if(j!=n-1){
		cout << "Happy Alex" << endl;
	}else{
		cout << "Poor Alex" << endl;
	}
}