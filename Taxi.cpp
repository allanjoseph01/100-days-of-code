#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<pair<string,int>>numchild;
	numchild.push_back(make_pair("count1",0));
	numchild.push_back(make_pair("count2",0));
	numchild.push_back(make_pair("count3",0));
	numchild.push_back(make_pair("count4",0));
	for(int i=0;i<n;i++){
		int num;
		cin >> num;
		numchild[num-1].second+=1;
	}
	int ans=0;
	ans += numchild[3].second;
	int count1=min(numchild[0].second,numchild[2].second);
	ans += count1;
	numchild[0].second = numchild[0].second-(count1);
	numchild[2].second = numchild[2].second-count1;
	int c;
	if(numchild[0].second%2==0){
		c=numchild[0].second/2;
	}else{
		c=(numchild[0].second-1)/2;
	}
	int count2=min(c,numchild[1].second);
	ans += count2;
	numchild[0].second = numchild[0].second-(2*count2);
	numchild[1].second = numchild[1].second-count2;
	ans += numchild[2].second;
	if(numchild[0].second==1 && numchild[1].second>0){
		numchild[0].second-=1;
		numchild[1].second-=1;
		ans+=1;
	}
	if(numchild[1].second%2==0){
		ans += (numchild[1].second)/2;
	}else{
		ans=ans+1+((numchild[1].second-1)/2);
	}
	if(numchild[0].second%4==0){
		ans += (numchild[0].second)/4;
	}else{
		ans=ans+1+(numchild[0].second/4);
	}
	cout << ans << endl;
}