//Q1. Square root 
class Solution {
  public:
    int floorSqrt(int n) {
        if(n==1)
        return 1;
        int low=1,high=n/2,mid;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(mid*mid==n)
            return mid;
            if(mid*mid<n)
            {
               low=mid+1; 
            }
            if(mid*mid>n)
            {
                high=mid-1;
            }
        }
        if(mid*mid>n)
        return mid-1;
        else return mid;
    }
};
//Time complexity is O(log n) and Space complexity is O(1).

//Q2. Koko eating bananas
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int n=piles.size();
        int low=1,high=piles[n-1],mid,ans;
        while(low<=high)
        {
            long long count=0;
            mid=low+(high-low)/2;
            for (int i = 0; i < n; i++) {
            count+=(piles[i]+mid-1)/mid; 
            }
            if(count<=h)
            {
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};
//Time complexity is O(n log n) and Space complexity is O(1).

//Q3. Find smallest divisor given a threshold
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int max=0,ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>max)
            max=nums[i];
        }
        int low=1,high=max,mid;
        while(low<=high)
        {
            int count=0;
            mid=low+(high-low)/2;
            for(int i=0;i<nums.size();i++)
            {
                count+=nums[i]/mid+((nums[i]%mid)!=0);
            }
            if(count<=threshold)
            {
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};
//Time complexity is O(nlogm) and space complexity is O(1).
