class Solution {
public:
    string addBinary(string a, string b) 
    {
        //empty string
        string ans = "";
        //total sum of carry, a[i], b[j]
        int sum=0;

        int i=a.length()-1, j=b.length()-1;
        
        //while there are char in any string or sum is 1(i.e. carry is 1)
        while(i>=0 || j>=0 || sum==1)
        {
            sum+= ( i>=0 ? a[i--] - '0' : 0);
            sum+= ( j>=0 ? b[j--] - '0' : 0);
            
            //append to the ans string
            ans = char(sum%2 + '0')+ans;
            //serves as carry to the next iteration
            sum/=2;
        }
        return ans; 
    }
};
