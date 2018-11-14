class Solution {
public:
    int romanToInt(string s) 
    {
        int ans=0;
        map<char, int> mmap;  
        
        mmap['I'] = 1;
        mmap['V'] = 5;
        mmap['X'] = 10;
        mmap['L'] = 50;
        mmap['C'] = 100;
        mmap['D'] = 500;
        mmap['M'] = 1000;

        for(int i=0; i<s.length(); i++)
        {            
            int diff = mmap.find(s[i])->second - mmap.find(s[i+1])->second;

            if(diff<0)
            {
                ans = ans + abs(diff);
                i++;
            }
            else
            {                
                ans = ans + mmap.find(s[i])->second;
            }
        }
        
        return ans;
    }
};
