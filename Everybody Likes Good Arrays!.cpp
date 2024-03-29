#include<bits/stdc++.h>
using namespace std;
int countparity(int lst[100],int pos,int size,char par){
	int count=0;
	if(par=='e'){
		while(pos<size && lst[pos]%2==0){
			pos+=1;
			count+=1;
		}
	}else{
		while(pos<size && lst[pos]&2!=0){
			pos+=1;
			count+=1;
		}
	}
	return count;
}
int arr[100];
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n;
		cin >> n;
		for(int i=0;i<n;i++){
			cin  >> arr[i];
		}
		int j=0;
		int ans=0;
		while(j<n){
			if(arr[j]%2==0){
				int ans1=countparity(arr,j,n,'e');
				j+=ans1;
				ans+=(ans1-1);
			}else{
				int ans2=countparity(arr,j,n,'o');
				j+=ans2;
				ans+=(ans2-1);
			}
		}
		cout << ans << endl;
	}
}