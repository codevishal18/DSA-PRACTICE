#include<iostream>
#include<algorithm>
using namespace std;
   
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

   int curr = arr[0];
   for(int i=0;i<n;i++)
   {
       curr = max(curr,arr[i]);
       cout<<curr<<endl;
   }
   return 0;
}