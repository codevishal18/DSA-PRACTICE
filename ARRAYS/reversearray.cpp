#include<iostream>
using namespace std;

void reverse(int arr[],int n)
{
    int low = 0;
    int high = n-1;
    while(low<high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
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

   reverse(arr,n);

   cout<<"the reversed array is:\n";
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
   return 0;
}