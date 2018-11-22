#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t=0;
    cin>>t;

    while(t>0)
    {
        string str;
        cin>>str;
        int j =0, k=0;
        
        for(int i=0; i<str.length(); i++)
        {
            if(i%2 == 0)
                cout<<str[i];
        }
        cout<<" ";
        for(int i=0; i<str.length(); i++)
        {
            if(i%2 != 0)
                cout<<str[i];
        }
        cout<<endl;
        t--;
    }
    return 0;
}

