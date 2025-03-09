//Q1. Move zeroes in array to last 
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left=0,right=1;
        for(right;right<nums.size();)
        {
            if((nums[right]!=0)&&(nums[left]==0))
            {
                swap(nums[left],nums[right]);
                left++;
                right++;
            }
            else if(nums[left]!=0)
            {
                left++;
                right++;
            }
            else right++;
        }
      return;
    }
};
//The time complexity is O(n) and the space complexity is O(1).

//Spacing

//Q2. rotate array
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k>nums.size())
        k=k%nums.size();
        if(k==0) 
        return;  
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        return;
    }
};
//The time complexity is O(n) and the space complexity is O(1)
