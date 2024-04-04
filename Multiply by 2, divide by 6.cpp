#include<bits/stdc++.h>
using namespace std;
int divi(int num){
	int count=0;
	while(num%6==0){
		num=num/6;
		count+=1;
	}
	return count;
}
int muli(int num){
	int count=0;
	while(num%6!=0){
		num=num*2;
		count+=1;
	}
	return count;
}
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n;
		cin >> n;
		int count=0;
		while(n!=1){
			if(n==2){
				break;
			}else{
				if(n%6==0){
					int c;
					c=divi(n);
					count+=c;
					n=n/pow(6,c);
				}else{
					int x;
					x=muli(n);
					count+=x;
					n=n*pow(2,x);
				}
			}
			if(n < 1){
				break;
			}
		}
		if(n!=1){
			cout << "-1" << endl;
		}else{
			cout << count << endl;
		}
	}
}