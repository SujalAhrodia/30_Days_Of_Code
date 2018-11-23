
/*
Normal solution, traversal O(n)

max_so_far: maximum contiguous sum of subsequence
max_ending: checking for the longest positive contiguous subsequence

*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
         int max_so_far = INT_MIN, max_ending=0;
        
         for(int i=0; i<nums.size(); i++)
         {
             max_ending+= nums[i];
            
             if(max_so_far < max_ending)
                 max_so_far = max_ending;
             if(max_ending < 0)
                 max_ending = 0;
         }
        return max_so_far;
    }
};

/*

DP

*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {

        int max_so_far = nums[0], max_ending = nums[0];
        
        for(int i=1; i<nums.size(); i++)
        {
            max_ending = max(nums[i], max_ending+nums[i]);
            max_so_far = max(max_so_far, max_ending);
        }

        
        return max_so_far;
    }
};
