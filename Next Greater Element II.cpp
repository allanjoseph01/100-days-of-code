#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int>nextGreaterElements(vector<int>& nums){
        int n=nums.size();
        vector<int>ans(n,-1);
        stack<int>cal;
        for(int i=0;i<(2*n);i++){
            if(!cal.empty() && nums[cal.top()]<nums[i%n]){
                while(!cal.empty() && nums[cal.top()]<nums[i%n]){
                    ans[cal.top()]=nums[i%n];
                    cal.pop();
                }
            }
            if(i<n){
                cal.push(i);
            }
        }
        return ans;
    }
};