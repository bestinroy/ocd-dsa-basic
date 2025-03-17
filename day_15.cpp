//Q1. kth element of two arrays
class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        vector<int> c;
        for(int i=0;i<a.size();i++)
        {
            c.push_back(a[i]);
        }
        for(int i=0;i<b.size();i++)
        {
            c.push_back(b[i]);
        }
        sort(c.begin(),c.end());
        return c[k-1];
    }
};
//The time complexity is O((n + m) log(n + m)) and the space complexity is O(n + m).

//Q2. Search a 2D matrix
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix[0].size()-1;
        int low=0, high=n, mid, row=-1;
        for(int i=0;i<matrix.size();i++)
        {
            if(target<=matrix[i][n])
            {row=i;
            break;}
        }
        if(row==-1)
        return false;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(matrix[row][mid]==target)
            {
                return true;
            }
            if(matrix[row][mid]<target)
            {
                low=mid+1;
            }
            if(matrix[row][mid]>target)
            {
                high=mid-1;
            }
        }
        return false;
    }
};
//The time complexity is O(m + n) and the space complexity is O(1).

//Q3. Search a 2D matrix II
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=0,col=matrix[0].size()-1;
        while(row<matrix.size()&&col>=0)
        {
            if(matrix[row][col]==target)
            return true;
            if(matrix[row][col]>target)
            col--;
            else row++;
        } 
        return false;
    }
};
//The time complexity is O(m + n) and the space complexity is O(1).
