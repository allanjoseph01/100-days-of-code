#include<bits/stdc++.h>
using namespace std;
string s;
int nb,ns,nc;
int pb,ps,pc;
long long r;
int cb=0,cs=0,cc=0;
bool check(long long be){
	long long psb=(max(0LL,(cb*be)-nb))*pb;
	long long pss=max(0LL,(cs*be)-ns)*ps;
	long long psc=max(0LL,(cc*be)-nc)*pc;
	return (psb+pss+psc)<=r;
}
int main(){
	cin >> s >> nb >> ns >> nc >> pb >> ps >> pc >> r;
	for(int i=0;i<s.length();i++){
		if(s[i]=='B'){
			cb+=1;
		}else if(s[i]=='S'){
			cs+=1;
		}else{
			cc+=1;
		}
	}
	long long high=1e13;
	long long low=0;
	long long mid;
	long long ans=0;
	while(low<=high){
		mid=(low+high)/2;
		if(check(mid)){
			low=mid+1;
			ans=mid;
		}else{
			high=mid-1;
		}
	}
	cout << ans << endl;
}