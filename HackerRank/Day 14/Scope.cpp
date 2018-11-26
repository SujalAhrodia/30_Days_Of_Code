#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

    Difference(vector<int> e)
    {
        this->elements = e;
    }
    void computeDifference()
    {
        vector<int> temp = this->elements;
        sort(temp.begin(), temp.end());

        this->maximumDifference= 0;
        for(int i=0; i<temp.size()-1; i++)
        {
            for(int j=i+1; j<temp.size(); j++)
            {
                int diff = abs(temp[i]-temp[j]);
                if(diff > this->maximumDifference)
                    this->maximumDifference = diff;
            }
        }
    }
}; 

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
