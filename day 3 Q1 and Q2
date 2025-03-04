//Q1. Flipping binary matriz image horizontally and then inverting the values of the image
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n;
        int l=image.size()-1;
        for(int i=0;i<=l;i++)
        {
            for(int j=0;j<=l/2;j++)
            {
                if(image[i][j]!=image[i][l-j]){
                n=image[i][j];
                image[i][j]=image[i][l-j];
                image[i][l-j]=n;}
                if(image[i][j]==1){
                    image[i][j]=0;
                }
                else{
                    image[i][j]=1;
                }
                if(image[i][l-j]==1){
                    image[i][l-j]=0;
                }
                else{
                    image[i][l-j]=1;
                }
            }
            if(l%2==0){
                if(image[i][l/2]==1){
                    image[i][l/2]=0;
                }
                else{
                    image[i][l/2]=1;
                }
            }
        }
        return image;
    }
};
//Time complexity O(n)
//Space complexity O(1)

//Spacing

Q2.Number of equivalent pairs of dominoes
class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int n=1,count=0;
        for(int i=0;i<dominoes.size();i++)
        {
            for(int j=n;j<dominoes.size();j++)
            {
                if((dominoes[i][0]==dominoes[j][0])&&(dominoes[i][1]==dominoes[j][1])||(dominoes[i][0]==dominoes[j][1])&&(dominoes[i][1]==dominoes[j][0]))
                count++;
            }
            n++;
        }
        return count;
    }
};
//Time Complexity O(n^2)
//Space Complexity O(1)
