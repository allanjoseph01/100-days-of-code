class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>answer(nums.size());
        vector<int>preprod(nums.size());
        vector<int>suffprod(nums.size());
        preprod[0]=1;
        suffprod[nums.size()-1]=1;
        for(int i=1;i<nums.size();i++){
            preprod[i]=preprod[i-1]*nums[i-1];
        }
        for(int j=nums.size()-2;j>=0;j--){
            suffprod[j]=suffprod[j+1]*nums[j+1];
        }
        for(int k=0;k<nums.size();k++){
            answer[k]=preprod[k]*suffprod[k];
        }
        return answer;
    }
};