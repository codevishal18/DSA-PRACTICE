#include<iostream>
using namespace std;
   
int main()
{
   int n;
   cout<<"enter the no of elements in the array\n";
   cin>> n;

   int array[n];
   cout<<"enter the elements of the array\n";
   for(int i=0;i<n;i++)
   {
       cin>> array[i];
   }

   for(int i=0;i<n;i++)
   {
       int csum = 0;
       for(int j=i;j<n;j++)
       {
           csum += array[j];
           cout<<csum<<endl;
       }
   }
   return 0;
}