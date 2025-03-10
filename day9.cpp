//Q1. Two sum
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        vector<int> ans;
        int n,flag=0,index1,index2;
        for(int i=0;i<nums.size();i++)
        {
            map[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++)
        {
            n=target-nums[i];
            auto it = map.find(n);
            if (it!=map.end()&&map[n]!=i){
            flag=1;
            index1=i;
            index2=map[n];
            break;}
        }
        if(flag==1)
        {
            ans.push_back(index1);
            ans.push_back(index2);
            return ans;
        }
        else return{-1,-1};
    }
};
//The time complexity of the solution is O(n) and the space complexity is O(n).

//Q2.sort colors
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int countred=0,countwhite=0,countblue=0,l=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            countred++;
            if(nums[i]==1)
            countwhite++;
            if(nums[i]==2)
            countblue++;
        }
        for(int i=0;i<countred;i++)
        {
            nums[l]=0;
            l++;
        }
        for(int i=0;i<countwhite;i++)
        {
            nums[l]=1;
            l++;
        }
        for(int i=0;i<countblue;i++)
        {
            nums[l]=2;
            l++;
        }
    }
};
//The time complexity is O(n) and the space complexity is O(1).

//Q3.max sum in subarrays minimums
class Solution {
  public:
    int pairWithMaxSum(vector<int> &arr) {
        int sum=0;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]+arr[i+1]>sum)
            sum=arr[i]+arr[i+1];
        }
        return sum;
    }
};
//The time complexity is O(n) and the space complexity is O(1).
