/*
Pascal's triangle:
at each level the term is a binomial coefficient of the above terms

nCk= n!/k!(n-k)!

*/
class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> ans;
        
        vector<int> l;
        vector<int> tl{1};
        
        if(numRows==0)
            return ans;
        
        ans.push_back(tl);
        
        for(int i=1; i<numRows; i++)
        {
            l.clear();
            l.push_back(1);
            for(int j=0; j<i-1; j++)
            {
                l.push_back(tl[j]+tl[j+1]);
            }
            l.push_back(1);
            ans.push_back(l);
            tl=l;
        }
        return ans;
    }
};
