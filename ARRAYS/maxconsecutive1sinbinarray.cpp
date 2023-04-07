#include<iostream>
using namespace std;

int max1s(int arr[],int n)
{
    int curr=0,res=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            curr=0;
        }
        else
        {
            curr++;
            res=max(res,curr);
        }
    }
    return res;
}
   
int main()
{
   int barray[6];
   cout<<"enter the 6 elements of the binary array\n";
   for(int i=0;i<6;i++)
   {
       cin>> barray[i];
   }

   cout<<"the binary array is:\n";
   for(int j=0;j<6;j++)
   {
       cout<<barray[j]<<" ";
   }
   cout<<endl;

   int result = max1s(barray,6);
   cout<<result<<endl;
   return 0;
}