#include<iostream>
#include<cmath>
using namespace std;
   
int main()
{
   int n;
   cout<<"enter a number\n";
   cin>> n;

   int result;
   result = pow(2,int(log2(n)));
   cout<<result<<endl;
   return 0;
}