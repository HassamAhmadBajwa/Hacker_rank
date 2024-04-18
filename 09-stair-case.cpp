// problem link
//      https://www.hackerrank.com/challenges/staircase/problem?isFullScreen=true

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n > 0 && n < 100)
    {
        for (int i = 1; i <= n; i++)
        {
            int space = n;
            while (space != i)
            {
                cout << " ";
                space--;
            }
            for (int j = n; j > n - i; j--)
            {

                cout << "#";
            }
            cout << endl;
        }
    }
}