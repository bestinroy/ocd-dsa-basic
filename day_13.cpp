//Q1. floor and ceil of x from sorted array
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	  if(a[0]>x)
		return {-1,a[0]};
		if(a[n-1]<x)
		return {a[n-1],-1};
		int low=0, high=n-1,mid,floor,ceil;
		while(low<=high)
		{
	  mid=low+(high-low)/2;
		if(a[mid]==x)
		{
			return {x,x};
		}
		if(a[mid]>x)
		{
			ceil=a[mid];
			high=mid-1;
		}
		if(a[mid]<x)
		{
			floor=a[mid];
			low=mid+1;
		}
		}
		return {floor,ceil};
}
//The time complexity is O(log n) and space complexity is O(1).

//Q2. Find minimum in rotated sorted array
class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0,high=nums.size()-1,mid,minelement=nums[0];
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(nums[mid]>=minelement)
            {
                low=mid+1;
            }
            if(nums[mid]<minelement)
            {
                minelement=nums[mid];
                high=mid-1;
            }
        }
        return minelement;
    }
};
//Time complexity is O(log n) and space complexity is O(1).

//Q3. Search in rotated sorted array
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1,mid;
        if(nums[low]==target)
        return low;
        if(nums[high]==target)
        return high;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(nums[mid]==target)
            return mid;
            if(nums[mid]>=nums[low])
            {
                if(target>=nums[low]&&target<nums[mid])
                high=mid-1;
                else low=mid+1;
            }
            else
            {
                if(target<nums[high]&&target>nums[mid])
                low=mid+1;
                else high=mid-1;
            }
        }
        return -1;
    }
};
//Time complexity is O(log n) and space complexity is O(1).
