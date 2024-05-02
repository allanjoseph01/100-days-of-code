#include<bits/stdc++.h>
using namespace std;
int divisible(string str,string tar){
	int index=str.length()-1;
	int count=0;
	while(index>0 && str[index]!=tar[1]){
		count+=1;
		index-=1;
	}
	if(index==0){
		return -1;
	}
	index-=1;
	while(str[index]!=tar[0] && index>=0){
		index-=1;
		count+=1;
	}
	if(index<0){
		index+=1;
	}
	if(str[index]!=tar[0]){
		return -1;
	}
	return count;
}
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		long long n;
		cin >> n;
		string s=to_string(n);
		int a=divisible(s,"00");
		int b=divisible(s,"25");
		int ans;
		if(a<0 || b<0){
			ans=max(a,b);
		}else{
			ans=min(a,b);
		}
		if(ans<0 || divisible(s,"50")<0){
			ans=max(ans,divisible(s,"50"));
		}else{
			ans=min(ans,divisible(s,"50"));
		}
		if(divisible(s,"75")<0 || ans<0){
			ans=max(ans,divisible(s,"75"));
		}else{
			ans=min(ans,divisible(s,"75"));
		}
		cout << ans << endl;
	}
}