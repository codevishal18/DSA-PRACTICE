#include<iostream>
using namespace std;
   
int main()
{
   int n;
   cout<<"enter the no of the term of the fibonacci series u want to find out\n";
   cin>> n;

   if(n==1)
   {
       cout<<0<<endl;
   }
   else if(n==2)
   {
       cout<<1<<endl;
   }
   else
   {
       int ans,a=0,b=1;
       for(int i=3;i<=n;i++)
       {
           ans = a+b;
           if(i==n)
           {
              cout<<ans<<endl;
           }
           a = b;
           b = ans;
       }
   }
   return 0;
}