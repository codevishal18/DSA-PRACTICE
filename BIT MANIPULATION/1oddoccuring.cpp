#include<iostream>
using namespace std;

int findOdd(int arr1[],int n)
{
    int res = 0;
    for(int i=0;i<n;i++)
    {
        res = res ^ arr1[i];
    }
    
    return res;
}

int main()
{
   int arr1[] = {4,4,4,3,3,5,5,3,3};
   int n = 9;

   int result = findOdd(arr1,n);
   cout<<result<<endl;

   return 0;
}