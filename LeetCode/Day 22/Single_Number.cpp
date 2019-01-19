/*
XOR truth table:
0^0:0
0^1:1
1^0:1
1^1:0

if different, then 1
else, 0

Note: for multiple inputs, perform XOR sequentially
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int ans=nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            ans^= nums[i];
        }
        return ans;
    }
};
