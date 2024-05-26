#include<bits/stdc++.h>
using namespace std;
string solve(int lst[],int s){
	int a=lst[0];
	int i=1;
	if(s==1){
		return "YES";
	}
	while(i<s){
		if(lst[i]>=lst[i-1]){
			i+=1;
		}else{
			break;
		}
	}
	if(i==s){
		return "YES";
	}
	if(lst[i]>a){
		return "NO";
	}
	i+=1;
	while(i<s){
		if(lst[i]>=lst[i-1]){
			i+=1;
		}else{
			return "NO";
		}
	}
	if(lst[i-1]>a){
		return "NO";
	}
	return "YES";
}

int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n;
		cin >> n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		cout << solve(arr,n) << endl;
	}
}