class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            ans+=min(nums[i],nums[i+1]);
            i++;
        }
        return ans;
    }
};
