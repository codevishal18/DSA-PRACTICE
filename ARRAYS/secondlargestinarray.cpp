#include<iostream>
using namespace std;

int secondlargest(int arr[],int n)
{
    int res = -1;
    int largest = 0;  //considering the first element as the largest one

    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[largest])
        {
            res = largest;
            largest = i;
        }
        else if(arr[i]!=arr[largest])
        {
            if((res)==-1 || arr[i]>arr[res])
            {
                res = i;
            }
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
   for(int i=0;i<n;i++)
   {
       cin>> arr[i];
   }

   cout<<"the elements of the array are:\n";
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
   cout<<endl;

   int result = secondlargest(arr,n);
   cout<<arr[result]<<endl;
   return 0;
}