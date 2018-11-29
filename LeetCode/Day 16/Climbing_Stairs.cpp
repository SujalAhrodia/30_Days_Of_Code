/*

If you look closely, it forms a fibonacci series:
0,1,2,3,5,8,13.....

Tip: recursive solution will cause TLE
*/

class Solution {
public:
    int climbStairs(int n) 
    {
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        int dp[n+1];
        dp[1]=1; dp[2]=2;
        
        for(int i=3; i<=n; i++)
        {
            dp[i] = dp[i-1] + dp[i-2];
        }
        
        return dp[n];
    }
};
