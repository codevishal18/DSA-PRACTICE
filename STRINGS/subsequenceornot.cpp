#include<bits/stdc++.h>
using namespace std;

/*recursive soln-> 
bool isSubsequence(string &s1,string &s2,int l1,int l2)  O(l1+l2)  O(l1+l2)
{
    if(l2==0)
    {
        return true;
    }
    if(l1==0)
    {
        return false;
    }

    if(s1[l1-1]==s2[l2-1])
    {
        return isSubsequences(s1,s2,l1-1,l2-1);
    }
    else
    {
        return isSubsequences(s1,s2,l1-1,l2);
    }
} */

bool isSubsequence(string &s1,string &s2,int l1,int l2)  //O(l1+l2)  O(1)
{
    if(l2>l1) return false;
    int j=0;
    for(int i=0;i<l1 && j<l2;i++)
    {
        if(s1[i]==s2[j])
        {
            j++;
        }
    }
    return (j==l2);
}

int main()
{
   //given 2 strings s1 and s2 we have to check if s2 is a subsequence of s1
   //naive approach is to generate all substrings of s1 and compare it with s2 O(2^n * m)

   string s1 = "ABCDE";
   string s2 = "AED";
   int l1 = s1.length();
   int l2 = s2.length();

   if(isSubsequence(s1,s2,l1,l2))
   {
       cout<<"s2 is subsequence of s1\n";
   }
   else
   {
       cout<<"s2 is not a subsequence of s1\n";
   }
   return 0;
}