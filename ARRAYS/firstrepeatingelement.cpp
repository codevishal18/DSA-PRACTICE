/*Q. Given an array of size N. The task is to find the first repeating element in the array of integers
   i.e an element that occurs more than once and whose index of 1st occurence is the smallest.
   1<= N <= 10^6   1<= Ai <=10^6 */

#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "enter the size of the array\n";
    cin >> n;

    int a[n];
    cout << "enter the elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // we store the index of each element in an array we can have integers from 1 to 10^6 so we create an
    // array of the size N

    int N = pow(10, 4) + 2;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    int minidx = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if ((idx[a[i]]) == -1)
        {
            idx[a[i]] = i;
        }
        else
        {
            minidx = min(minidx, (idx[a[i]]));
        }
    }

    if (minidx == INT_MAX)
    {
        cout << "-1\n";
    }
    else
    {
        cout << minidx + 1 << endl;
    }
    return 0;
}