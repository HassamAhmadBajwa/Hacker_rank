// problem link
//      https://www.hackerrank.com/challenges/apple-and-orange/problem?isFullScreen=false
#include <iostream>
#include <vector>
using namespace std;
void countApple(int s, int t, int a, int b, vector<int> apple, vector<int> orange);
int main()
{
    // s = starting point of sam house location...
    // t = ending point of sam house location...
    // a = location of the apple tree...
    // b = location of the orange tree...
    // apple = distance at which each  the apple fall from the tree...
    // orange = distance at which each orange fall from the tree...
    // Note a < s < t < b;
    int s, t;
    int a, b;
    vector<int> apple;
    vector<int> orange;
    int quant_Apple;
    int quant_Orange;
    cout << "Enter Starting and Ending position of the sam house: ";
    cin >> s >> t;
    cout << "Enter the location of Apple tree and Orange tree: ";
    cin >> a >> b;
    cout << "Enter the quantity of Apple and Orange: ";
    cin >> quant_Apple;
    cin >> quant_Orange;
    cout << "Enter the Apple value: ";
    int x, y;
    for (int i = 0; i < quant_Apple; i++)
    {
        cin >> x;
        apple.push_back(x);
    }
    cout << "Enter the Orange value: ";
    for (int i = 0; i < quant_Orange; i++)
    {
        cin >> y;
        orange.push_back(y);
    }
    countApple(s, t, a, b, apple, orange);
}
void countApple(int s, int t, int a, int b, vector<int> apple, vector<int> orange)
{
    int apple_Count = 0;
    int orange_Count = 0;
    if (a < s < t < b)
    {
        for (int i = 0; i < apple.size(); i++)
        {
            apple[i] = apple[i] + a;
            if (apple[i] >= s && apple[i] <= t)
            {
                apple_Count = apple_Count + 1;
            }
        }
        for (int i = 0; i < orange.size(); i++)
        {
            orange[i] = orange[i] + b;
            if (orange[i] >= s && orange[i] <= t)
            {
                orange_Count = orange_Count + 1;
            }
        }
    }
    cout << apple_Count << endl;
    cout << orange_Count << endl;
}