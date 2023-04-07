#include <iostream>
using namespace std;

int getlargest(int arr[], int n)
{
    int result = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[result])
        {
            result = i;
        }
    }

    return result;
}

int main()
{
    int n;
    cout << "enter the size of the array\n";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "the array is:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    int x = getlargest(arr, n);
    cout << endl;
    cout << arr[x] << endl;

    return 0;
}