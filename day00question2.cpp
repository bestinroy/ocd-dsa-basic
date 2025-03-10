class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j){
                if(nums[i]==nums[j])
                return true;
                }
            }
        }
        return false;
    }
};
