//Q1. Good or Bad string
#include<bits/stdc++.h>
using namspace std;
class Solution {
  public:
    int isGoodorBad(string S) {
        int a[]={'a','e','i','o','u'};
        int countv=0,countc=0;
        for(int i=0;i<S.size();i++)
        {
            if(S[i]!='?')
            {
            for(int j=0;j<5;j++)
            {
                if(S[i]==a[j]){
                countv++;
                countc=0;
                break;
                }
                if((j==4)&&(a[j]!=S[i]))
                {
                    countc++;
                    countv=0;
                }
            }
            }
            else{
                countc++;
                countv++;
            }
            if((countc)>3||(countv>5))
            break;
        }
        if((countc>3)||(countv>5))
        return 0;
        else
        return 1;
    }
};
//time complexity: O(n)
//space complexity: O(1)

//Spacing

//Q2. Merging two 2D arrays by summing their values
class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> nums3;
        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i][0] < nums2[j][0]) {
                nums3.push_back({nums1[i][0], nums1[i][1]});
                i++;
            } else if (nums1[i][0] > nums2[j][0]) {
                nums3.push_back({nums2[j][0], nums2[j][1]}); 
                j++;
            } else {
                nums3.push_back({nums1[i][0], nums1[i][1] + nums2[j][1]}); 
                i++;
                j++;
            }
        }
        while (i < nums1.size()) {
            nums3.push_back({nums1[i][0], nums1[i][1]});
            i++;
        }
        while (j < nums2.size()) {
            nums3.push_back({nums2[j][0], nums2[j][1]});
            j++;
        }
        return nums3;
    }
};
//time complexity: O(n+m)
//space complexity: O(n+m)
