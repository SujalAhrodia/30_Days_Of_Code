class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int carry=1;
        int len = digits.size()-1;
        
        for(int i=len; i>=0; i--)
        {
            int old_carry = carry;
            carry = (digits[i]+carry)/10;
            digits[i] = (digits[i]+old_carry)%10;
        }
        
        if(carry==0)
            return digits;
        else
        {
            vector<int> ans(digits.size()+1);
            //copies digit vector to ans 
            //replacing ans[0] with carry: overwriting
            copy(digits.begin(), digits.end(), ans.begin());
            ans[0]=carry;
            
            /*
            another way - without overwriting
            copies digit vector to ans starting from the second element
            
            copy(digits.begin(), digits.end(), ans.begin()+1);
            ans[0]=carry;
            */
            return ans;
        }
    }
};
