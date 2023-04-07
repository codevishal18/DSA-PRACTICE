#include<iostream>
using namespace std;

void leadersinarray(int arr[],int n)
{
    int ldr = arr[n-1];
    cout<<ldr<<" ";

    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>ldr)
        {
            ldr=arr[i];
            cout<<ldr<<" ";
        }
    }
}
   
int main()
{
   int arr[10];
   cout<<"enter the 10 elements of the array\n";
   for(int i=0;i<10;i++)
   {
       cin>> arr[i];
   }

   cout<<"the array is:\n";
   for(int i=0;i<10;i++)
   {
       cout<<arr[i]<<" ";
   }
   cout<<endl;

   cout<<"the leaders of the array are:\n";
   leadersinarray(arr,10);

   return 0;
}