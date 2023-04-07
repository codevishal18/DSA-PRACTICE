#include<iostream>
#include<algorithm>
using namespace std;

//time complexity- O(3^n) this question has a better solution by dynamic programming

int maxpieces(int n,int a,int b,int c)
{
     if(n==0)
     {
         return 0;
     }
     if(n<0)
     {
         return -1;
     }
     int res = max(maxpieces(n-a,a,b,c),max(maxpieces(n-b,a,b,c),maxpieces(n-c,a,b,c)));

     if(res==-1)
     {
         return -1;
     }

     return res+1;
}

int main()
{
    int n,a,b,c;
    cin>> n>> a>> b>> c;

    int result=maxpieces(n,a,b,c);
    cout<<result;

    return 0;
}