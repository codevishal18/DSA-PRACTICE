#include<iostream>
using namespace std;

//left rotate by 1 d times or   time:theta(n*d)  space:theta(1)
//store first d elments of the array in a temp array time:theta(n)  space:theta(d)

void reverse(int arr[],int low,int high)
{
    while(low<high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}

void leftrotatebyd(int arr[],int n,int d)    //time:theta(n)  space:theta(1)
{
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}
   
int main()
{
   int arr[5];
   cout<<"enter 5 elements of the array\n";
   for(int i=0;i<5;i++)
   {
       cin>> arr[i];
   }

   cout<<"the array is:\n";
   for(int i=0;i<5;i++)
   {
       cout<<arr[i]<<" ";
   }
   cout<<endl;

   int d;
   cout<<"enter d<=n and >0\n";
   cin>> d;

   leftrotatebyd(arr,5,d);

   cout<<"the final array is:\n";
   for(int i=0;i<5;i++)
   {
       cout<<arr[i]<<" ";
   }
   return 0;
}