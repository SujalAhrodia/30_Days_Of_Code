class Solution {
public:
    bool check_prefix(vector<string>& strs, int low, int middle)
    {
        for(int i=0; i<strs.size(); i++)
        {
            for(int j=low; j<=middle; j++)
            {
                if(strs[i][j] != strs[0][j])
                    return false;
            }
        }
        return true;
    }
    string longestCommonPrefix(vector<string>& strs) 
    {
        if(strs.size()==0)
            return "";
        
        string prefix;
        int min_len = INT_MAX;
        
        for(int i=0; i<strs.size(); i++)
        {
            if(strs[i].length() < min_len)
                min_len = strs[i].length();
        }
        
        int low = 0, high = min_len;
        
        while(low<=high)
        {
            int middle = low + (high-low)/2;

            //to check if each string has any common prefix
            if(check_prefix(strs, low, middle))
            {
                prefix = prefix + strs[0].substr(low, middle-low+1);
                low = middle+1;
            }
            else
            {
                //check on the left side
                high=middle-1;
            }
        }
        
        return prefix;
    }
};
