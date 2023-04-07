#include<iostream>
using namespace std;

void movezeroestoend(int arr[],int n) 
{
    int count = 0;   //counting the non zero elements
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            int temp = arr[i];
            arr[i] = arr[count];
            arr[count] = temp;
            count++; 
        }
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

   movezeroestoend(arr,n);

   cout<<"the resultant array is:\n";
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
   
   return 0;
}