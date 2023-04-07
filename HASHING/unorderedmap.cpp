#include<iostream>
#include<unordered_map>  //used to store key value pairs
using namespace std;

int main()
{
   //uses hashing 
   unordered_map<string,int> m;
   m["Vishal"] = 20;   //[] member access operator
   m["Vikash"] = 12;
   m.insert({"Papa",49});
   for(auto x:m)   //not sorted 
   {
       cout<<x.first<<" "<<x.second<<endl;
   }
   for(auto it = m.begin();it!=m.end();it++)
   {
       cout<<it->first<<" "<<it->second<<endl;
   }
   return 0;
}