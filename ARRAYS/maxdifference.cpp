#include<iostream>
using namespace std;

//finding the max diff arr[j]-arr[i] in the array such that j>i
   
int main()
{
   int arr[8]={2,8,4,10,1,6,3,11};
   int minval=arr[0];
   int res = arr[1]-arr[0];

   for(int i=1;i<8;i++)
   {
       res = max(res,arr[i]-minval);
       minval = min(minval,arr[i]);
   }

   cout<<res<<endl;
   return 0;
}