#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
int main(){
	int n,k;
	cin >> n >> k;
	int j=k-1;
	vector<pair<int,int>>height;
	int d=0;
	int p;
	for(int i=0;i<n;i++){
		cin >> arr[i];
		if(i==j){
			p=j;
			int s=0;
			for(int r=k;r>0;r--){
				s+=arr[p];
				p-=1;
			}
			height.push_back(make_pair(s,j-(k-2)));
		}
		else if(i>j){
			int sum=height[d].first+arr[i]-arr[p+1];
			p+=1;
			d+=1;
			height.push_back(make_pair(sum,i-(k-2)));
		}
	}
	sort(height.begin(),height.end());
	cout << height[0].second << endl;
}