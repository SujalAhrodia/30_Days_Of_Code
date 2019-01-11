#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int fine=0;
struct Date
{
    public:
    int day, month, year;
};
void diff(Date d1, Date d2)
    {
        if(d1.year>d2.year)
            fine=10000;
        else if(d1.year<d2.year)
            fine=0;
        else
        {
            if(d1.month>d2.month)
            {
                int diff_m = d1.month - d2.month;
                fine=500*diff_m;
            }
            else
            {
                if(d1.day>d2.day)
                {
                    int diff_d= d1.day-d2.day;
                    fine=15*diff_d;
                }
            }
        }
}
int main() 
{
    Date d1,d2;
    cin>>d1.day>>d1.month>>d1.year;
    cin>>d2.day>>d2.month>>d2.year;
    diff(d1,d2);
    cout<<fine;
    return 0;
}
