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
	d-=(b*2);
	if(d<0){
		ret.first=false;
		ret.second=-1;
		return ret;
	}
	long long nc=(2*b)+(3*(((b-1)*(b))/2));
	if(to<nc){
		ret.first=false;
		ret.second=-1;
	}else{
		ret.first=true;
		ret.second=(to-nc);
	}
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