#include <iostream>
#include <vector>
using namespace std;

vector<int> compare(vector<int> a, vector<int> b)
{
    vector<int> cmp(2);
    int alice = 0;
    int bob = 0;
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
        {
            alice++;
            cmp[0] = alice;
        }
        else if (a[i] < b[i])
        {
            bob++;
            cmp[1] = bob;
        }
    }
    return cmp;
}
int main()
{
    vector<int> a(3);
    vector<int> b(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> b[i];
    }
    vector<int> result = compare(a, b);
    cout << result[0] << " " << result[1] << endl;
}