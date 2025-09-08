class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        for(int num1=1;num1<n;num1++)
        {
            int num2=n-num1;
            if(check(num1) && check(num2))
            {
                return {num1, num2};
            }
        }
        return {};
    }
    bool check(int n)
    {
        while(n>0)
        {
            if(n%10 == 0) return false;
            n/=10;
        }
        return true;
    }
};