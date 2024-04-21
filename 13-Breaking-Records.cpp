// problem link
//      https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem?isFullScreen=false

#include <iostream>
#include <vector>
using namespace std;
// function Declaration...
vector<int> breaking_Records(vector<int> scores);
// main...
int main()
{
    vector<int> scores;
    int size, value;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter the scores: ";
    for (int i = 0; i < size; i++)
    {
        cin >> value;
        scores.push_back(value);
    }
    vector<int> result = breaking_Records(scores);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}
// function initialization...
vector<int> breaking_Records(vector<int> scores)
{
    vector<int> record;
    int highest = scores[0];
    int lowest = scores[0];
    int count1 = 0;
    int count2 = 0;
    for (int i = 1; i < scores.size(); i++)
    {
        if (scores[i] > highest)
        {
            highest = scores[i];
            count1 += 1;
        }
        else if (scores[i] < lowest)
        {
            lowest = scores[i];
            count2 += 1;
        }
    }
    record.push_back(count1);
    record.push_back(count2);
    return record;
}
