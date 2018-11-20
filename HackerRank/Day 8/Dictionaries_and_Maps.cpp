#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    string name, number;
    map<string, string> dir;

    cin>>t;
    cin.ignore();

    while(t>0)
    {
        cin>>name;
        cin>>number;
        dir[name] = number;
        t--;
    }
    while(cin>>name)
    {
        auto point = dir.find(name);
        if(point!=dir.end())
        {
            cout<<name<<"="<<point->second<<endl;
        }
        else
        {
            cout<<"Not found"<<endl;
        }
    }
    
    return 0;
}

