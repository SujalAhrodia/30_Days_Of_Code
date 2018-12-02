#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }

    int swaps = 0;

    for(int i=0; i<a.size(); i++)
    {
        int temp=0;
        for(int j=0; j<a.size()-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swaps++;
            }
        }
    }
    cout << "Array is sorted in "<<swaps<<" swaps."<<endl;
    cout << "First Element: "<< a[0] << endl;
    cout << "Last Element: "<< a[n-1];
        return 0;
}

