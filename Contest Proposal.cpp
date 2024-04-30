#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int _=0;_<t;_++){
		int n;
		cin >> n;
		vector<int>rate;
		int arr[n];
		for(int i=0;i<n;i++){
			int num;
			cin >> num;
			rate.push_back(num);
		}
		for(int j=0;j<n;j++){
			cin >> arr[j];
		}
		int count=0;
		for(int k=0;k<n;k++){
			if(rate[k]>arr[k]){
				rate.pop_back();
				rate.push_back(arr[k]);
				sort(rate.begin(),rate.end());
				count+=1;
			}
		}
		cout << count << endl;
	}
}