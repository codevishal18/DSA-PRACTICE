#include<iostream>
using namespace std;
   
int main()
{
   int n;
   cout<<"enter the size of the array\n";
   cin>>n;

   int arr[n];
   cout<<"enter elements of the array\n";  //array contains elements from 1 to n-1 and 1 duplicate element
   for(int i=0;i<n;i++)
   {
       cin>> arr[i];
   }

   int ans = 0;

   for(int i=0;i<n;i++)
   {
      ans = ans^arr[i];
   }
   for(int i=1;i<n;i++)
   {
       ans = ans^i;
   }
   cout<<ans<<endl;
   return 0;
}