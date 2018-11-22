class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        size_t found = haystack.find(needle);
        
        if(found != string::npos)   
            return found;
        else
            return -1;
    }
};

///////without find()

class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        if(needle.empty())
            return 0;

        bool flag = false;
        
        for(int i=0; i<haystack.length(); i++)
        {
            if(haystack[i] == needle[0])
            {                
                for(int j=0; j<needle.length(); j++)
                {
                    if(haystack[i+j] != needle[j])
                        break;
                    if(j==needle.length()-1)
                    {
                        return i;
                        flag = true;
                    }
                }
            }
        }
        if(flag == false)
            return -1;
    }
};
