#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    vector<pair<int,int>>time;
    for(int _=0;_<t;_++){
        int h,m;
        cin >> h >> m;
        time.push_back(make_pair(h,m));
    }
    int ans=1;
    int i=0;
    while(i<t){
        if(i>0){
            if(time[i-1].first==time[i].first){
                int count=1;
                while(i<t && time[i].second-time[i-1].second<1 && time[i].first==time[i-1].first){
                    count+=1;
                    i+=1;
                }
                if(count==1){
                	i+=1;
				}
				ans=max(ans,count);              
            }else{
                i+=1;
            }
        }else{
            i+=1;
        }
    }
    cout << ans << endl;
}