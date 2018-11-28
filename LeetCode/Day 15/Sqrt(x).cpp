class Solution {
public:
    int mySqrt(int x) 
    {        
        /* 
        return pow(x,0.5);
        */
        
        //Using Binary Search
        
        if(x==0 || x==1)
            return x;
        
        long long low=1, high=x/2, ans;
        
        while(low<=high)
        {
            long long mid = low + (high-low) /2;
            long long sq =mid*mid;
            
            if(sq == x)
                return mid;
            if(sq > x)
                high = mid-1;
            else
            {
                low = mid+1;
                ans=mid;
            }
        }
        return ans;
    }
};
