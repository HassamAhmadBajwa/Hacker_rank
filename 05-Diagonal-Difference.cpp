// problem link
//       https://www.hackerrank.com/challenges/diagonal-difference/problem?isFullScreen=falses

#include <iostream>
#include <vector>
using namespace std;
int sumDiagonal(int sum, int &a)
{
    sum = sum + a;
    return sum;
}
int main()
{
    int n;
    cout << "enter the diagonal matrix" << endl;
    cin >> n;
    int sum1 = 0;
    int sum2 = 0;
    int difference = 0;
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum1 = sumDiagonal(sum1, arr[i][j]);
                if (i + j == 2)
                {
                    sum2 = sumDiagonal(sum2, arr[i][j]);
                }
            }
            else if (i + j == 2)
            {
                sum2 = sumDiagonal(sum2, arr[i][j]);
            }
        }
    }
    if (sum1 > sum2)
    {
        difference = sum1 - sum2;
    }
    else
    {
        difference = sum2 - sum1;
    }
    cout << (difference);
}
