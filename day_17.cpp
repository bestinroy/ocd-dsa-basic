//Q1. Isomorphic strings
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> map1,map2;
        int i=0;
        while(s[i]!='\0')
        {
            auto n=map1.find(s[i]);
            auto m=map2.find(t[i]);
            if(n==map1.end()&&m==map2.end())
            {
                map1[s[i]]=t[i];
                map2[t[i]]=s[i];
                i++;
            }
            else if(n!=map1.end()&&m!=map2.end())
            {
                if (n->second!=t[i]) {
                    return false;
                }
                else i++;
            }
            else return false;
        }
        return true;

    }
};
//Time and space complexity is both O(n).

//Q2. Remove outermost parenthesis
class Solution {
public:
    string removeOuterParentheses(string s) {
        int balance=0;
        string result="";
        for(int i=0;s[i]!='\0';i++) {
            if (s[i]=='(') {
                if (balance>0) {
                    result+=s[i];
                }
                balance++;
            }
            else if (s[i]==')') {
                balance--;
                if (balance>0) {
                    result+=s[i];
                }
            }
        }
        return result;
    }
};
//The time complexity is O(n) and the space complexity is O(n).
