#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s)
{
   int begin = 0;
   int last = s.length()-1;
   while(begin<last)
   {
      if(s[begin]!=s[last])
      {
         return false;
      }
      begin++;
      last--;
   }
   return true;
}

int main()
{
   //we can use reverse function i.e reverse(string.begin(),string.end());
   //we have use 0(n) aux space and time complexity is 0(n) where n is the length of the string

   string s2 = "gfg";
   string s1 = "vishal";

   if(isPalindrome(s1))
   {
      cout<<"s1 is palindromic string\n";
   }
   else
   {
      cout<<"s1 is not a palindromic string\n";
   }

   return 0;
}