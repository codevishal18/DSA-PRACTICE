#include<iostream>
using namespace std;
   
int main()
{
   int n;
   cout<<"enter the no of elements in the array\n";
   cin>> n;

   int arr[n];
   cout<<"enter the elements of the array\n";
   for(int i=0;i<n;i++)
   {
       cin>> arr[i];
   }

   for(int i=0;i<n;i=i+2)
   {
       if((i+1)<n)
       {
          int temp = arr[i];
          arr[i] = arr[i+1];
          arr[i+1] = temp;
       }
   }

   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
   return 0;
}