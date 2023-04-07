#include<iostream>
using namespace std;

int longest1s(int n)
{
   int count = 0;
   while(n>0)
   {
      n = n & (n<<1);  //this removes trailing 1s in each group of 1s
      count++;
      n = n/10;
   }
   return count;
}

int main()
{
   int n;
   cout<<"enter a binary number\n";
   cin>> n;

   int result = longest1s(n);
   cout<<result<<endl;

   return 0;
}