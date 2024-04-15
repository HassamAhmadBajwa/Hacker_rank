// sighting birds example

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, arr;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        cin >> arr;
        vec.push_back(arr);
    }
    vector<int> count(5, 0);

    for (int i = 0; i < n; i++)
    {
        if (vec[i] == 1)
        {
            count[0]++;
        }
        if (vec[i] == 2)
        {
            count[1]++;
        }
        if (vec[i] == 3)
        {
            count[2]++;
        }
        if (vec[i] == 4)
        {
            count[3]++;
        }

        if (vec[i] == 5)
        {
            count[4]++;
        }
    }
    int max = 0;
    for (int i = 1; i < 5; i++)
    {
        if (count[i] > count[max])
            max = i;
        else if (count[i] == count[max])
        {
            if (i < max)
            {
                max = i;
            }
        }
    }
    int value = max + 1;
    cout << value;

    return 0;
}
