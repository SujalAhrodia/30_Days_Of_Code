#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void check(int n)
{
    bool flag=true;

    if(n==1)
        cout<<"Not prime"<<endl;
    else
    {
        int s=sqrt(n); //saves computation time
        
        for(int i=2; i<=s; i++)
        {
            if(n%i==0)
            {
                flag = false;
                break;
            }
        }
        if(flag==true)
            cout<<"Prime"<<endl;
        else
            cout<<"Not prime"<<endl;
    }
}

int main() 
{
    bool flag=true;
    int t;
    cin>>t;

    while(t>0)
    {
        int n;
        cin>>n;
        check(n);
        t--;
    }
    return 0;
}
