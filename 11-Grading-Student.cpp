// problem link
//      https://www.hackerrank.com/challenges/grading/problem?isFullScreen=true
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr;
    int size, n;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> n;
        arr.push_back(n);
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 37)
        {
            if ((arr[i] + 1) % 5 == 0)
            {
                arr[i] = arr[i] + 1;
            }
            else if ((arr[i] + 2) % 5 == 0)
            {
                arr[i] = arr[i] + 2;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
