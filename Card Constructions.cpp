#include<bits/stdc++.h>
using namespace std;
pair<bool,long long> check(long long b,long long to){
	pair<bool,long long>ret;
	long long d=to;
	if(to<2){
		ret.first=false;
		ret.second=-1;
		return ret;
	}
	long long num=b-1;
	to-=(b*2);
	if(to<0){
		ret.first=false;
		ret.second=-1;
		return ret;
	}
	while(to>0 && num>=1){
		to-=(num*3);
		num-=1;
		if(to<0){
			ret.first=false;
			ret.second=-1;
			return ret;
		}
	}
	if(num==0 && to>=0){
		ret.first=true;
		ret.second=(to);
		return ret;
	}
	ret.first=false;
    ret.second=-1;
    return ret;
}
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		long long n;
		cin >> n;
		int count=0;
		while(n>0){
			long long low=0;
			long long high=n;
			long long mid;
			int g=-1;
			pair<bool,long long>an;
			while(low<=high){
				mid=(low+high)/2;
				pair<bool,long long>an=check(mid,n);
				if(an.first){
					low=mid+1;
					g=an.second;
				}else{
					high=mid-1;
				}
			}
			if(g==-1){
                break;
            }else{
                n=g;
                count++;
            }
		}
		cout << count << endl;
	}
}