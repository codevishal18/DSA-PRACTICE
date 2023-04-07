#include<bits/stdc++.h>
using namespace std;
   
int main()
{
   string intro = "My name is Vishal Bhanja and I am learning to code";
   int countl[26] = {0};
   int countu[26] = {0};

   for(int i=0;i<intro.length();i++)
   {
       if(intro[i]>='a' && intro[i]<='z')
       {
           countl[intro[i]-'a']++;
       }
       else if(intro[i]>='A' && intro[i]<='Z')
       {
           countu[intro[i]-'A']++;
       }
       else
       {
           continue;
       }
   }

   for(int i=0;i<26;i++)
   {
       
           if(countu[i]>0)
           {
              cout<<(char)(i+'A')<<" "<<countu[i]<<endl;
           }
       
           if(countl[i]>0)
           {
              cout<<(char)(i+'a')<<" "<<countl[i]<<endl;
           }
    }
   return 0;
}