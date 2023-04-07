#include <iostream>
using namespace std;

int main()
{
   char c;
   cout << "enter a character\n";
   cin >> c;

   int b = c;
   cout << b << endl;

   cout << "the ASCII value of the character " << c << " is " << int(c);

   return 0;
}