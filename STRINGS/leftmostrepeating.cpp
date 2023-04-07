#include<bits/stdc++.h>
using namespace std;

const int CHAR = 256;

//for doing it in one traversal
/*fill(count,count+CHAR,-1);
  result = INT_MAX;
  int index = count[s[i]];
  if(index==-1)  //first occ of char
  {
      count[s[i]] = i;
  }
  else
  {
      result = min(result,index);
  }
  return result; */ 
/*or we can create an boolean array and start traversing from right side and maintain visitation of
any element in the string
  bool visited[CHAR];
  int res = -1;
  fill(visited,visited+CHAR,false);
  for(int i=s.length()-1;i>=0;i--)
  {
      if(visited[s[i]])
      {
          res = i;
      }
      else
      {
          visited[s[i]]=true;
      }
  }
  return res; */  

int leftmostrepeating(string &s)  //in this tc->O(slen) but we use 2 traversals
{
   int count[CHAR] = {0};
   for(int i=0;i<s.length();i++)
   {
       count[s[i]]++;
   }

   for(int i=0;i<s.length();i++)
   {
       if(count[s[i]]>1)
       {
           return i;
       }
   }
   return -1;
}

int main()
{
   string s1 = "abccbd";
   int result = leftmostrepeating(s1);
   cout<<result<<endl;
   return 0;
}