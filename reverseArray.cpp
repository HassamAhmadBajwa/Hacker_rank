#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // initialize the size of the array
    vector<int> vec;
    int size;
    cin >> size;
    int arr;
    for (int i = 0; i < size; i++)
    {
        cin >> arr;
        vec.push_back(arr);
    }
    // reverse the array
    int i = 0;
    int j = size - 1;
    for (int i = 0; i < j; i++)
    {
        int temp;
        temp = vec[i];
        vec[i] = vec[j];
        vec[j] = temp;
        j--;
    }
    // print the reverse array
    for (int i = 0; i < size; i++)
    {
        cout << vec[i] << " ";
    }
    // delete the array from heap;
}