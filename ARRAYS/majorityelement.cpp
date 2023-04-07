#include <iostream>
using namespace std;

int findmajority(int arr[], int n)
{
    int res = 0;
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[res])
        {
            count++;
        }
        else
        {
            count--;
        }

        if (count == 0)
        {
            res = i;
            count = 1;
        }
    }

    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[res])
        {
            count++;
        }
    }
    if (count >= n / 2)
    {
        return arr[res];
    }
    else
    {
        return -1;
    }
}

int main()
{
    int arr[8] = {8, 8, 8, 8, 1, 2, 3, 8};
    int result = findmajority(arr, 8);
    cout << result << endl;
    return 0;
}