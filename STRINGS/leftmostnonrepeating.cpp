#include<bits/stdc++.h>
using namespace std;

const int CHAR = 256;

int leftmostnonrepeating(string &s)
{
   int count[CHAR] = {0};
   for(int i=0;i<s.length();i++)
   {
       count[s[i]]++;
   }

   for(int i=0;i<s.length();i++)
   {
       if(count[s[i]]==1)
       {
           return i;
       }
   }
   return -1;
}

int eff(string &s)
{
    bool visited[CHAR];
    int res;
    fill(visited,visited+CHAR,false);
    for(int i=s.length()-1;i>=0;i--)
    {
        if((visited[s[i]])==false)
        {
            res = i;
            visited[s[i]]=true;
        }
        
    }
    return res;
}

int main()
{
   string s1 = "abcdcba";
   int result = leftmostnonrepeating(s1);
   cout<<result<<endl;
   int effresult = eff(s1);
   cout<<effresult<<endl;
   return 0;
}