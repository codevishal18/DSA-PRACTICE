#include<iostream>
using namespace std;

void leftrotateby1(int arr[],int n)
{
    int temp = arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}
   
int main()
{
   int n;
   cout<<"enter the no of elements of the array\n";
   cin>> n;

   int arr[n];
   cout<<"enter the elements of the array:\n";
   for(int i=0;i<n;i++)
   {
       cin>> arr[i];
   }

   cout<<"the array is:\n";
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
   cout<<endl;

   leftrotateby1(arr,n);

   cout<<"the final array is:\n";
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }

   return 0;
}