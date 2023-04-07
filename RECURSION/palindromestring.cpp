#include<iostream>
using namespace std;

bool isPalindrome(string str,int start,int end)
{
    if(start>=end) return true;

    return ((str[start]==str[end]) && isPalindrome(str,start+1,end-1));
}

int main()
{
   string s;
   cout<<"enter a string\n";
   cin>> s;

   if(isPalindrome(s,0,s.length()-1))
   {
       cout<<"it is a palindromic string\n";
   }
   else
   {
       cout<<"it is not a palindromic string\n";
   }

   return 0;
}