/*Count and Say / Look and Say Sequence:

1.  1
2.  11
3.  21
4.  1211
5.  111221
6.  312211
7.  13112221
8.  1113213211
9.  31131211131221
10. 13211311123113112211

*/

class Solution {
public:
    string countAndSay(int n) 
    {
        if(n<=1)
            return "1";
        
        string str = countAndSay(n-1);
        string str1;
        
        int count=1;
        
        for(int i=0; i<str.length()-1; i++)
        {
            if(str[i]==str[i+1])
                count++;  
            else
            {
                str1.append(1, count+'0');
                str1.append(1, str[i]);
                count=1;
            }
        }
        str1.append(1, count+'0');
        str1.append(1, 1+'0');
        return str1;
    }
};
