#include<bits/stdc++.h>
using namespace std;
int elecount(int lst[],int s,int num){
	int c=0;
	for(int i=0;i<s;i++){
		if(lst[i]==num){
			c+=1;
		}
	}
	return c;
}
int arr[101];
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n;
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		int count=0;
		int count1=elecount(arr,n,1);
		int countn1=elecount(arr,n,-1);
		while(count1<countn1 || countn1%2!=0){
			count+=1;
			countn1-=1;
			count1+=1;
		}
		cout << count << endl;
	}
}