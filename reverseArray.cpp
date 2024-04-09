#include <iostream>
using namespace std;
int main()
{
    // initialize the size of the array
    int n;
    cin >> n;
    int *arr = new int(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // reverse the array
    int i = 0;
    int j = n - 1;
    for (int i = 0; i < j; i++)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
    }
    // print the reverse array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    // delete the array from heap;
    delete[] arr;
}