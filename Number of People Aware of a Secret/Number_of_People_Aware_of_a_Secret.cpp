class Solution {
public:
    int peopleAwareOfSecret(int n, int delay, int forget) {
        vector<long> dp(n+1 , 0); 
        long mod = (long)1e9+7;
        long noOfPeopleSharingSecret = 0;
        long ans = 0;
        
        dp[0] = 1;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+delay;j<i+forget && j<n ;j++)
            {
                dp[j]=(dp[j]%mod+dp[i]%mod)%mod;
            }
        }
        
        for(int i = n - forget  ; i<n ; i++)
        {
            ans = (ans % mod + dp[i] % mod) % mod;
        }
        return (int) ans;
    }
};
 