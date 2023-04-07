#include<iostream>
using namespace std;

void find2odd(int arr[],int n)
{
    int xors=0,res1=0,res2=0;
    for(int i=0;i<n;i++)
    {
        xors = xors ^ arr[i];
    }

    int sb = xors & (~(xors-1));

    for(int i=0;i<n;i++)
    {
        if((arr[i]&sb)!=0)
        {
             res1 = res1 ^ arr[i];
        }
        else
        {
             res2 = res2 ^ arr[i];
        }
    }

    cout<<res1<<" "<<res2<<endl;

}
 
int main()
{
   int arr[] = {4,4,4,4,5,7,7,9,9,8};
   int n = 10;

   find2odd(arr,n);

   return 0;
}