//Q1.Minimum Add to Make Parentheses Valid
 class Solution {
public:
    int minAddToMakeValid(string s) {
        int count=0;
        int result=0; 
        
        for (int i=0;i<s.size();i++) {
            if(s[i]=='(') {
                count++;
            } 
            else if (s[i]==')') {
                if (count>0) {
                    count--;
                } else {
                    result++;
                }
            }
        }
        result+=count;
        return result;
    }
};
//The time complexity is O(n) and the space complexity is O(1).

//Q2.Sum of Beauty of All Substrings
class Solution {
public:
    int beautySum(string s) {
    int n = s.length();
    int beauty=0;
    for (int i=0;i<n;i++) {
        int freq[26]={0};
        for (int j=i;j<n;j++) {
            freq[s[j]-'a']++;
            int maxfreq=0,minfreq=INT_MAX;
            for (int k=0;k<26;k++) {
                if (freq[k]>0){
                    maxfreq = max(maxfreq,freq[k]);
                    minfreq = min(minfreq,freq[k]);
                }
            }
            beauty+=(maxfreq-minfreq);
        }
    }
    return beauty;
    }
};
//The time complexity is O(n^2) and the space complexity is O(1).
