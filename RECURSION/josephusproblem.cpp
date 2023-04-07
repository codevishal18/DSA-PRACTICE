#include<iostream>
using namespace std;

int josephus(int n,int k)
{
    if(n==1)
    {
        return 0;
    }

    return (josephus(n-1,k)+k)%n;
}
   
int main()
{
   int n,k;
   cout<<"enter n and k"<<endl;
   cin>> n>> k;

   int result = josephus(n,k);  //index starts from 0 , for index starting from 1 add 1 to result
   cout<<result<<endl;

   return 0;
}