#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2;
    cout << "enter two numberes\n";
    cin >> n1 >> n2;

    char op;
    cout << "enter a operator\n";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << n1 + n2 << endl;
        break;

    case '-':
        cout << n1 - n2 << endl;
        break;

    case '*':
        cout << n1 * n2 << endl;
        break;

    case '/':
        cout << n1 / n2 << endl;
        break;

    case '^':
        cout << pow(n1, n2) << endl;
        break;

    case '%':
        cout << n1 % n2 << endl;
        break;

    default:
        cout << "invalid operator\n";
        break;
    }
    return 0;
}