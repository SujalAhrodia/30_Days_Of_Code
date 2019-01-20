/*
Majority Element: count>floor(n/2) ; n=size of array

Approach: Moore's Voting Algorithm
Note: It assumes that there exists a majority element.

step 1: find a candidate

  start with 1st element and compare every element of the array
  if same; count++
  else; count--
  if count=0; make the current element the maj element and count=1

step 2:
  verify that the candidate occurs more than floor(n/2) times
  ** normal counting algo
  
*/
class Solution {
public:
    //this function wasn't necessary for this problem
    bool check(vector<int>& nums, int x)
    {
        int c=0;
        for(int i=0;i<nums.size(); i++)
        {
            if(nums[i]==x)
                c++;
        }
        if(c>floor(nums.size()/2))
            return true;
        else
            return false;
    }
    int majorityElement(vector<int>& nums) 
    {
        int count=1, maj_index=0;
        
        for(int i=1; i<nums.size(); i++)
        {
            nums[maj_index]==nums[i] ? count++ : count--;
            
            if(count==0)
            {
                maj_index=i;
                count=1;
            }
        }
        if(check(nums,nums[maj_index]))
            return nums[maj_index];
        else
            return 0;
    }
};
