#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

/*

Interfaces: 
An interface is a collection of abstract methods and constants that form a common set of base rules/specifications for those classes that implement it

abstract class
virtual functions(should be in pulic section, cannot be static or friend func of another class)

*/

class AdvancedArithmetic{
    public:
        virtual int divisorSum(int n)=0;
};

class Calculator : public AdvancedArithmetic 
{
    public:
    
    int divisorSum(int n) 
    {
        int sum=0;
        for(int i=1; i<=n; i++)
        {
            if(n%i == 0)
                sum+=i;
        }
        return sum;
    }
};

int main(){
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator(); 
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}
