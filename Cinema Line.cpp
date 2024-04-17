#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<pair<string,int>>balance;
	balance.push_back(make_pair("25",0));
	balance.push_back(make_pair("50",0));
	balance.push_back(make_pair("100",0));
	bool ans=true;
	for(int i=0;i<n;i++){
		int x;
		cin >> x;
		if(x==25){
			balance[0].second+=1;
		}
		if(x==50){
			if(balance[0].second>=1){
				balance[0].second-=1;
				balance[1].second+=1;
			}else{
				ans=false;
			}
		}
		if(x==100){
			if(balance[0].second>=1 && balance[1].second>=1){
				balance[0].second-=1;
				balance[1].second-=1;
			}else if(balance[0].second>=3){
				balance[0].second-=3;
			}else{
				ans=false;
			}
		}
	}
	if(ans==false){
		cout << "NO" << endl;
	}else{
		cout << "YES" << endl;
	}
}