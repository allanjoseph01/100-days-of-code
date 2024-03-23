#include<bits/stdc++.h>
using namespace std;
char arr[10][10];
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		vector<pair<int,int>>vecpair;
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				cin >> arr[i][j];
				if(arr[i][j]=='X'){
					vecpair.push_back(make_pair(i+1,j+1));
				}
			}
		}
		int n=vecpair.size();
		int count=0;
		for(int i=0;i<n;i++){
			if(((vecpair[i].first==1 || vecpair[i].first==10) && (vecpair[i].second>=1 && vecpair[i].second<=10)) || ((vecpair[i].second==1 || vecpair[i].second==10) && (vecpair[i].first>=1 && vecpair[i].first<=10))){
				count+=1;
			}else if(((vecpair[i].first==2 || vecpair[i].first==9) && (vecpair[i].second>=2 && vecpair[i].second<=9)) || ((vecpair[i].second==2 || vecpair[i].second==9) && (vecpair[i].first>=2 && vecpair[i].first<=9))){
				count+=2;
			}else if(((vecpair[i].first==3 || vecpair[i].first==8) && (vecpair[i].second>=3 && vecpair[i].second<=8)) || ((vecpair[i].second==3 || vecpair[i].second==8) && (vecpair[i].first>=3 && vecpair[i].first<=8))){
				count+=3;
			}else if(((vecpair[i].first==4 || vecpair[i].first==7) && (vecpair[i].second>=4 && vecpair[i].second<=7)) || ((vecpair[i].second==4 || vecpair[i].second==7) && (vecpair[i].first>=4 && vecpair[i].first<=7))){
				count+=4;
			}else if(((vecpair[i].first==5 || vecpair[i].first==6) && (vecpair[i].second>=5 && vecpair[i].second<=6)) || ((vecpair[i].second==5 || vecpair[i].second==6) && (vecpair[i].first>=5 && vecpair[i].first<=6))){
				count+=5;
			}
		}
		cout << count << endl;
	}
}