class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ret;
        deque<int>ans;
        for(int i=0;i<k;i++){
            while(!ans.empty() && nums[i]>=nums[ans.back()]){
                ans.pop_back();
            }
            ans.push_back(i);
        }
        ret.push_back(nums[ans.front()]);
        int si=nums.size();
        for(int j=k;j<si;j++){
            while(!ans.empty() && ans.front()<=(j-k)){
                ans.pop_front();
            }
            while(!ans.empty() && nums[j]>=nums[ans.back()]){
                ans.pop_back();
            }
            ans.push_back(j);
            ret.push_back(nums[ans.front()]);      
        }
        return ret;
    }
};