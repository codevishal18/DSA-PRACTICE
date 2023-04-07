#include<iostream>
using namespace std;

//starting from n-1th element
int subsetsum(int arr[],int n,int sum)   //O(2^n)
{
    if(n==0)
    {
        return (sum==0)?1:0;
    }
    return subsetsum(arr,n-1,sum) + subsetsum(arr,n-1,sum-arr[n-1]);
}
   
int main()
{
   int n;
   cout<<"enter the size of the array\n";
   cin>> n;

   int arr[n];
   cout<<"enter the elements of the array\n";
   for(int i=0;i<n;i++)
   {
       cin>> arr[i];
   }

   int sum;
   cout<<"enter the sum\n";
   cin>> sum;
   int result = subsetsum(arr,n,sum);
   cout<<result<<endl;
   return 0;
}