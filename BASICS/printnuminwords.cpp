#include<iostream>
#include<string>
using namespace std;

void numtoword(int n,string arr[])
{
    if(n==0)
    {
        return;
    }

    int digit = n%10;
    n=n/10;
    numtoword(n,arr);
    cout<<arr[digit]<<" ";
}
   
int main()
{
   int n;
   cout<<"enter a number\n";
   cin>> n;

   string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
   numtoword(n,arr);
   return 0;
}