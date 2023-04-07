#include<bits/stdc++.h>
using namespace std;

//if lengths of both the strings are not equal then they are not anagrams
//we can sort both the strings and check if they are equal O(nlogn)

const int CHAR = 256;

bool areAnagram(string &s1,string &s2)   //O(n)  O(1)
{
    if(s1.length()!=s2.length())
    {
        return false;
    }
    int count[CHAR] = {0};
    for(int i=0;i<s1.length();i++)
    {
        count[s1[i]]++;
        count[s2[i]]--;
    }

    for(int i=0;i<CHAR;i++)
    {
        if(count[i]!=0)
        {
            return false;
        }
    }
    return true;
}


int main()
{
   string s1 = "silent";
   string s2 = "listen";

   if(areAnagram(s1,s2))
   {
       cout<<"both strings are anagram of each other\n";
   }
   else
   {
       cout<<"not anagrams\n";
   }
   return 0;
}