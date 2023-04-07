#include<iostream>
using namespace std;
   
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

   //insertion sort in this we insert every element in the unsorted array into the sorted array at its correct position
   for(int i=1;i<n;i++)
   {
       int curr = arr[i];
       int j = i-1;
       while(arr[j]>curr && j>=0)
       {
           arr[j+1]=arr[j];
           j--;
       }
       arr[j+1]=curr;
   }

   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
   return 0;
}