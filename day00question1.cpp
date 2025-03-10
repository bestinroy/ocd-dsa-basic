class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size(),l=0;
        vector<int> ans(2*n);
        for(int i=0;i<2*n;i++)
        {
           ans[i]=nums[l];
           l++;
           if(l>n-1)
           l=0;
        }
        return ans;
    }
};
