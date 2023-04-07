#include<iostream>
using namespace std;

int removeduplicates(int arr[],int n)
{
    int res = 1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[res-1])
        {
             arr[res]=arr[i];
             res++;
        }
    }
    return res;
}
   
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

   cout<<"the array is:\n";
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
   cout<<endl;

   int result = removeduplicates(arr,n);
   cout<<"final array is:\n";
   for(int i=0;i<result;i++)
   {
       cout<<arr[i]<<" ";
   }
   return 0;
}