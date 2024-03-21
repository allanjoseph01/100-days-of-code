#include<bits/stdc++.h>
using namespace std;
bool extremelyRound(int x){
    string str=to_string(x);
    int s=str.size();
    int c = 0;
    for(int i=0;i<s;i++){
        if(str[i] != '0'){
            c+=1;
        }
        if(c>1){
            break;
        }
    }
    return c==1;
}
vector < int > arr;
int main(){
	int t;
	cin >> t;
	for(int i=1;i<1000000;i++){
		if(extremelyRound(i)){
			arr.push_back(i);
		}
	}
	for(int _=0;_<t;_++){
		int n;
		cin >> n;
		int count=0;
		int j=0;
		while(j < arr.size() && arr[j]<=n){
			count+=1;
			j+=1;
		}
		cout << count << endl;
	}
}