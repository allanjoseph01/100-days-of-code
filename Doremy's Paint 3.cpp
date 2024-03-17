#include<bits/stdc++.h>
using namespace std;
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
		int a=arr[0];
		int count1=0;
		int count2=0;
		int countnum=0;
		int b;
		for(int j=0;j<n;j++){
			if(arr[j]==a){
				count1+=1;
			}else if(countnum==0){
				b=arr[j];
				count2+=1;
				countnum++;
			}else if(arr[j]==b){
				count2+=1;
			}else{
				countnum+=1;
				break;
			}
		}
		if(countnum==2){
			cout << "NO" << endl;
		}else if(count1+count2==n && (count1==n/2 or count2==n/2 or count1==n)){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}