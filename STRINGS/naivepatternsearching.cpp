#include<bits/stdc++.h>
using namespace std;

void patSearching(string &txt,string &pat)  //O((n-m+1)*m)
{
   int n = txt.length();
   int m = pat.length();
   for(int i=0;i<=n-m;i++)
   {
       int j;
       for(j=0;j<m;j++)
       {
           if(pat[j]!=txt[i+j])
           {
               break;
           }
       }
       if(j==m)
       {
           cout<<i<<" ";
       }
   }
}

void patSearchingeff(string &txt,string &pat)  //0(n)
{
   int n = txt.length();
   int m = pat.length();
   for(int i=0;i<=n-m;)
   {
       int j;
       for(j=0;j<m;j++)
       {
           if(pat[j]!=txt[i+j])
           {
               break;
           }
       }

       if(j==m)
       {
           cout<<i<<" ";
       }

       if(j==0)
       {
           i = i+1;
       }
       else
       {
           i = i+j;
       }
   }
}

int main()
{
   string txt = "ABCABCD";string pat="ABCD";
   cout<<"All index numbers where pattern found:"<<" ";
   patSearching(txt,pat);
   patSearchingeff(txt,pat);
   return 0;
}