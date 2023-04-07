#include<iostream>
using namespace std;
   
int main()
{
   int n;
   cout<<"enter the amount in rupees\n";
   cin>> n;

   int result = 0;
   int h,f,tw,te,o,r;

   switch(1)
   {
      case 1: 
      h=n/100;
      r= n-(h*100);
      cout<<"no of 100/- notes is: "<<h<<endl;

      case 2:
      f=r/50;
      r= r-(f*50);
      cout<<"no of 50/- notes is: "<<f<<endl;

      case 3:
      tw=r/20;
      r= r-(tw*20);
      cout<<"no of 20/- notes is: "<<tw<<endl;

      case 4:
      te=r/10;
      r= r-(te*10);
      cout<<"no of 10/- notes is: "<<te<<endl;

      case 5:
      o=r/10;
      r= r-(o*1);
      cout<<"no of 1/- coins is: "<<o<<endl;
      
   }
   return 0;
}