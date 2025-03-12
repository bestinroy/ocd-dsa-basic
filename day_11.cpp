//Q1. Pascals triangle
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        for(int i=0;i<numRows;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(j==0||j==i)
                ans[i].push_back(1);
                else
                {
                    ans[i].push_back(ans[i-1][j-1]+ans[i-1][j]);
                }
            }
        }
        return ans;
    }
};
//The time and space complexity of the algorithm are O(n^2).

//Q2. Rotate image
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int l=0;
        for(int i=0;i<matrix.size()-1;i++)
        {
            for(int j=l;j<matrix.size();j++)
            {
                if((i!=j)&&(matrix[i][j]!=matrix[j][i]))
                {
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
            l++;
        }
        for(int i=0;i<matrix.size();i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
//Time complexity is O(n^2) and space complexity is O(1).

//Q3. Spiral matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>arr;
        int t=0,b=matrix.size()-1,l=0,r=matrix[0].size()-1;
        while((t<=b)&&(l<=r))
        {
            for(int i=l;i<=r;i++)
            {
                arr.push_back(matrix[t][i]);
            }
            t++;
            for(int i=t;i<=b;i++)
            {
                arr.push_back(matrix[i][r]);
            }
            r--;
            if(b>=t){
            for(int i=r;i>=l;i--)
            {
                arr.push_back(matrix[b][i]);
            }
            b--;}
            if(r>=l){
            for(int i=b;i>=t;i--)
            {
                arr.push_back(matrix[i][l]);
            }
            l++;}
        }
        return arr;
    }
};
//Time Complexity: O(m * n)
//Space Complexity: O(m * n)
