// problem link
//       https://www.hackerrank.com/challenges/mini-max-sum/problem?isFullScreen=false

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr;
    vector<int> arr2;
    long int size, n;
    long int sum = 0;
    cin >> size;
    // for loop to input array...
    for (int i = 0; i < size; i++)
    {
        cin >> n;
        arr.push_back(n);
    }
    // for loop to solve the challenge...
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (i != j)
            {
                sum = sum + arr[j];
            }
        }
        arr2.push_back(sum);
        sum = 0;
    }

    // sort the array and array[0] is min and array[last] = max...
    long int min = 0, max = 0;
    long int temp;
    for (int i = 0; i < arr2.size(); i++)
    {
        for (int j = i + 1; j < arr2.size(); j++)
        {
            if (arr2[i] > arr2[j])
            {
                temp = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = temp;
            }
        }
    }
    // print min and max of the array...
    min = arr2[0];
    max = arr2[arr2.size() - 1];
    cout << min << " " << max << endl;
}