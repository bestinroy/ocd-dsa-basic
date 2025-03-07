//Q1. Most Visited sectors in a circular track
#include <bits/stdc++.h>
class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& rounds) {
        int*arr=(int*)calloc(sizeof(int),n+1);
        int u,v,t;
        for(int i=0;i<rounds.size();i++)
        {
            u=rounds[i];
            if(i==0){
                arr[u]+=1;
                v=u;
                continue;
            }
            if(u>v)
            {
                v++;
                while(v<=u)
                {
                    arr[v]+=1;
                    v++;
                }
                v=u;
            }
            if(v>u)
            {
                if(v!=n)
                v++;
                else v=1;
                while(v!=u)
                {
                    arr[v]+=1;
                    v++;
                    if(v>n)
                    {
                        v=1;
                    }
                }
                arr[v]+=1;
            }
        }
        int max=*max_element(arr, arr + n+1);
        vector<int>arr1;
        for (int i=1;i<n+1;i++){
        if (arr[i]==max) {
            arr1.push_back(i);
         }
        }
        return arr1;
    }
};
//Time complexity is O(m + n) and the space complexity is O(n).(m=elements in round,n=no.of sectors)

//Spacing

//Q2. Stock pan problem
class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        vector<int> span;
        int count=0,j,l;
        for(int i=0;i<arr.size();i++)
        {
            j=i;
            l=arr[i];
            while(i>=0)
            {
                if(l>=arr[i])
                {
                count++;
                i--;
                }
                else break;
            }
            i=j;
            span.push_back(count);
            count=0;
        }
        return span;
    }
};
//Time Complexity: O(n^2)
//Space Complexity: O(n)
