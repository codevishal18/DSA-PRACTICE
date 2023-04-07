#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int countsetbits1(int n)  // checking every bit O(n)
{
    int result1 = 0;
    while(n>0)
    {
        if(n&1!=0)
        {
            result1++;
        }
        n=n>>1;
    }
    return result1;
}

int countsetbits2(int n)   //BRIAN KERNINGAM'S ALGORITHM O(no of set bits) n-1 => all trailing 0s of n become 1 and lmsb becomes 0
{
    int result2 = 0;
    while(n!=0)
    {
        n=(n&(n-1));
        result2++;
    }
    return result2;
}

int main()
{
   int n;
   cout<<"enter a number\n";
   cin>> n;

   int res1 = countsetbits1(n);
   int res2 = countsetbits2(n);

   cout<<res1<<" "<<res2<<endl;
   return 0;
}
