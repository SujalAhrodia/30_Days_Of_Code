class Solution {
public:
    int reverse(int x) 
    {
        long ans = 0;
        bool minus = false;
        
        if(x == INT_MIN)
            return 0;
        
        if(x<0)
        {
            x = -x;
            minus = true;
        }
        
        while(x>0)
        {
            ans = ans*10 + x%10;
            x = x/10;
        }
        
        if(ans >INT_MAX)
            return 0;
        if(minus == true)
            return -ans;
        
        return ans;
    }
};
