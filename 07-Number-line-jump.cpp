// problem link
//      https://www.hackerrank.com/challenges/kangaroo/problem?isFullScreen=true

#include <iostream>
using namespace std;
int main()
{
    int x1, v1, x2, v2;
    string s1 = "YES";
    string s2 = "NO";
    cout << "Enter the value of x1, v1, x2, v2:: ";
    cin >> x1 >> v1 >> x2 >> v2;
    for (int i = 1; i <= x2; i++)
    {
        if (x1 >= 0 && x2 > x1 && v1 >= 1 && v2 >= 1)
        {
            x1 = x1 + (v1 + 1);
            x2 = x2 + (v2 + 1);
        }
    }
    if (x1 == x2)
    {
        cout << s1 << endl;
    }
    else
    {
        cout << s2 << endl;
    }
}