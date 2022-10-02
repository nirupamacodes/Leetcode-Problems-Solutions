class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int l=0,r=0,n=nums.size();
        
        while (l<n && r<n){
            if (nums[l]!=0){
                l++;
            }else if (nums[r]==0){
                r++;
            }else if (l<r){
                swap(nums[l],nums[r]);
            }else {
                r++;
            }
        }
    }
};
