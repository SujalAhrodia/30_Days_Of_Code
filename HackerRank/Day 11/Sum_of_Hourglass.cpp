/*

For a 2-D array of RxC,
the hourglasses to be considered ar from (R-2)x(C-2).
Because it's a 3x3 matrix.

*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int sum = INT_MIN;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            int temp = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
           sum = max(sum, temp); 
        }
    }
    cout<<sum;
    return 0;
}
