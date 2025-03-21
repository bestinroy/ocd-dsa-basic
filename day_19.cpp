//Q1. Maximum Nesting Depth of the Parenthesis
class Solution {
public:
    int maxDepth(string s) {
        int count=0,depth=0;
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]=='(')
            {
                count++;
            }
            if(s[i]==')')
            {
                if(depth<count)
                depth=count;
                count--;
            }
        }
        return depth;
    }
};
//The time complexity of O(n) and space complexity of O(1).

//Q2. Roman to integer
class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]=='I')
            {
                if(s[i+1]=='V'||s[i+1]=='X')
                ans=ans-1;
                else
                ans=ans+1;
            }
            if(s[i]=='V')
            ans=ans+5;
            if(s[i]=='X')
            {
                if(s[i+1]=='L'||s[i+1]=='C')
                ans=ans-10;
                else
                ans=ans+10;
            }
            if(s[i]=='L')
            ans=ans+50;
            if(s[i]=='C')
            {
                if(s[i+1]=='D'||s[i+1]=='M')
                ans=ans-100;
                else
                ans=ans+100;
            }
            if(s[i]=='D')
            ans=ans+500;
            if(s[i]=='M')
            ans=ans+1000;
        }
        return ans;
    }
};
//The time complexity is O(n) and the space complexity is O(1).
