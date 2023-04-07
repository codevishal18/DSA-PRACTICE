#include<iostream>
using namespace std;

int maxprofit(int stock[],int n)
{
    int profit = 0;
    for(int i=1;i<n;i++)
    {
        if(stock[i]>stock[i-1])
        {
            profit = profit + stock[i]-stock[i-1];
        }
    }
    return profit;
}
   
int main()
{
   int n;
   cout<<"enter the no of days u want to consider the prices of stock\n";
   cin>> n;

   int stock[n];
   cout<<"enter the prices of stock on "<<n<<" days\n";
   for(int i=0;i<n;i++)
   {
       cin>> stock[i];
   }

   cout<<"the price of stock on n days are:\n";
   for(int i=0;i<n;i++)
   {
       cout<<stock[i]<<" ";
   }
   cout<<endl;

   int result = maxprofit(stock,n);
   cout<<result<<endl;

   return 0;
}