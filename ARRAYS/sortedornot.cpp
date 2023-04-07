#include<iostream>
using namespace std;

bool issorted(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            return false;
        }
    }
    return true;
}
   
int main()
{
   int n;
   cout<<"enter the no of elements in the array\n";
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

   if(issorted(arr,n))
   {
       cout<<"the array is sorted\n";
   }
   else
   {
       cout<<"the array is not sorted\n";
   }
   return 0;
}