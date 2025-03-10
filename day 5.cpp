//Q1. Distribute Money to maximum children
class Solution {
public:
    int distMoney(int money, int children) {
        if(money<children)
        return -1;
        int m,c=0;
        m=money-children;
        while((m>6)&&(children>c))
        {
            m-=7;
            c++;
        }
        if((m==3)&&(children-c==1)||(m>0)&&(children-c==0))
        {
            c--;
            return c;
        }
        else return c;
    }
    };
//Time complexity:O(1)
//Space complexity:O(1)
