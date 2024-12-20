class Solution {
public:
    int subtractProductAndSum(int n) {
        int alone=0,sum=0,prod=1;
        while(n!=0)
        {
            alone=n%10;
            sum=sum+alone;
            prod=prod*alone;
            n=n/10;
        }
        return prod-sum;
    }
};