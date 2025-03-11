// Q1. Rearrange elements by sign
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int odd=nums.size()-2,even=nums.size()-1;
        stack<int> pos, neg;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=0)
            pos.push(nums[i]);
            else neg.push(nums[i]);
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(i==even)
            {
                nums[i]=neg.top();
                neg.pop();
                even-=2;
            }
            if(i==odd)
            {
                nums[i]=pos.top();
                pos.pop();
                odd-=2;
            }
        }
        return nums;
    }
};
The time complexity is O(n) and the space complexity is O(n).

//Q2. Next permutation
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size()-1;
        for(int i=nums.size()-1;i>0;i--)
        {
            if(nums[i]>nums[i-1])
            {
                while(n>i-1)
                {
                    if(nums[n]>nums[i-1])
                    {
                        swap(nums[n],nums[i-1]);
                        break;
                    }
                    n--;
                }
                reverse(nums.begin()+i,nums.end());
                return;
            }
        }  
        reverse(nums.begin(),nums.end());
        return; 
    }
};
The time complexity is O(n) and the space complexity is O(1).

//Q3. Best time to buy and sell stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0],profit,maxprofit=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]<min)
            {
                min=prices[i];
            }
            profit=prices[i]-min;
            if(maxprofit<profit)
            {
                maxprofit=profit;
            }
        }
        return maxprofit;
    }
};
//The time complexity is O(n) and space complexity is O(1).
