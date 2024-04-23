// problem link
//      https://www.hackerrank.com/challenges/bon-appetit/problem?isFullScreen=false

#include <iostream>
#include <vector>
using namespace std;
void bill_Division(vector<int> bill, int k, int b);
int main()
{
    vector<int> bill;
    int n, k, b, val;
    cout << "Enter the size of array and index that not to eat: ";
    cin >> n >> k;
    cout << "Enter the number of items: ";
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        bill.push_back(val);
    }
    cout << "Enter the overCharge: ";
    cin >> b;
    bill_Division(bill, k, b);
}
void bill_Division(vector<int> bill, int k, int b)
{
    int sum = 0;
    for (int i = 0; i < bill.size(); i++)
    {
        if (i != k)
        {
            sum = sum + bill[i];
        }
    }
    sum = sum / 2;
    if (sum == b)
    {
        cout << "Bon Appetit" << endl;
    }
    else
    {
        sum = b - sum;
        cout << sum << endl;
    }
}