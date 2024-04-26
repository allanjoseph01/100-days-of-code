#include<bits/stdc++.h>
using namespace std;
int arr[30000];
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n;
		cin >> n;
		vector<pair<string,int>>remainder;
		remainder.push_back(make_pair("0",0));
		remainder.push_back(make_pair("1",0));
		remainder.push_back(make_pair("2",0));
		for(int i=0;i<n;i++){
			cin >> arr[i];
			if(arr[i]%3==0){
				remainder[0].second+=1;
			}else if(arr[i]%3==1){
				remainder[1].second+=1;
			}else{
				remainder[2].second+=1;
			}
		}
		int c0=remainder[0].second,c1=remainder[1].second,c2=remainder[2].second;
		int num=n/3;
		int count=0;
		while(c0!=c1 || c1!=c2){
			if(c2>num){
				int diff=c2-num;
				c2-=diff;
				c0+=diff;
				count+=diff;
			}else if(c1>num){
				int diff1=c1-num;
				c1-=diff1;
				c2+=diff1;
				count+=diff1;
			}else if(c0>num){
				int diff2=c0-num;
				c0-=diff2;
				c1+=diff2;
				count+=diff2;
			}
		}
		cout << count << endl;
	}
}