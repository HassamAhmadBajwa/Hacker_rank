// problem link
//      https://www.hackerrank.com/challenges/drawing-book/problem?isFullScreen=false

#include <iostream>
#include <vector>
using namespace std;
// function declare...
int Count_pages(int total_page, int find);
int main()
{

    int total_page;
    int find;

    cin >> total_page;
    cin >> find;

    int result = Count_pages(total_page, find);
    cout << result << endl;
}

// function initialization...
int Count_pages(int total_page, int find)
{
    vector<int> book;
    int count2 = 0;
    int last;
    int count1 = 0;
    int start = 1;
    int min = 0;
    int max = 0;
    for (int i = 0; i < total_page; i++)
    {
        book.push_back(start);
        start++;
    }
    if (book[0] == find)
    {
        return 0;
    }
    else
    {
        count1 = 1;
        int i = 1;
        while (book[i] != book[book.size() - 1])
        {

            if (book[i] == find || book[i + 1] == find)
            {
                min = count1;
                break;
            }
            else
            {
                count1++;
                i = i + 2;
            }
        }
    }
    last = book.size() - 1;
    if (book[book.size() - 1] == find)
    {
        return 0;
    }

    else
    {
        if (book[last] % 2 == 0)
        {
            last = book.size() - 2;
            count2 = 1;
        }
        else
        {
            last = book.size() - 1;
            count2 = 0;
        }

        int i = last;
        while (book[i] != book[0])
        {
            if (book[i] == find || book[i - 1] == find)
            {
                max = count2;
                break;
            }
            else
            {
                count2++;
                i = i - 2;
            }
        }
    }
    if (min > max)
    {
        return max;
    }
    else
    {
        return min;
    }
}