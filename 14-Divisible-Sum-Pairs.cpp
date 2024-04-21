// problem link
//      https://www.hackerrank.com/challenges/divisible-sum-pairs/problem?isFullScreen=false

#include <iostream>
#include <vector>
using namespace std;
// function declaration...
int divisible_Sum_Pairs(vector<int> ar, int k);
// main function
int main()
{
    vector<int> ar;
    int size, value, k;
    cout << "Enter the size of array: ";
    cin >> size;
    cout << "Enter the sum pair value: ";
    cin >> k;
    cout << "Enter the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> value;
        ar.push_back(value);
    }
    int result = divisible_Sum_Pairs(ar, k);
    cout << result;
}
// funtion initialization...
int divisible_Sum_Pairs(vector<int> ar, int k)
{
    int count = 0;
    for (int i = 0; i < ar.size(); i++)
    {
        for (int j = i + 1; j < ar.size(); j++)
        {
            if (i < j && (ar[i] + ar[j]) % k == 0)
            {
                count++;
            }
        }
    }
    return count;
}