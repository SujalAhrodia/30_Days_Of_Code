#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    //The number of iterations required to reach 0 is actually length of the longest consecutive sequence of 1s
    //compute the iterations by repetetive AND operation between 'x' and shifted 'x'
    int count=0;
    while(n!=0)
    {
        n = (n&(n<<1));
        count++;
    }
    cout<<count;
    return 0;
}
