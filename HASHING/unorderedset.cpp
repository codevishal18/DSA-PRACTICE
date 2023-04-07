#include<iostream>
#include<unordered_set>  //contains distinct elements
using namespace std;

int main()
{
   //works on hashing  
   unordered_set<int> s;  //in set elements are sorted
   s.insert(10);
   s.insert(5);
   s.insert(15);
   s.insert(20);
   /*for(int x:s)
   {
       cout<<x<<" ";   //elements in any order
   }*/

   for(auto it = s.begin();it!=s.end();it++)
   {
       cout<<(*it)<<" ";
   }
   cout<<endl;
   cout<<s.size()<<endl;
   /*s.clear();
   cout<<s.size()<<endl;*/
   if(s.find(15)==s.end())  //find func returns iterator
   {
       cout<<"not found";   //if not found reurns s.end()
   }
   else
   {
       cout<<"found "<<(*s.find(15))<<endl;
   }
   //count func returns 1 if present or returns 0
   //erase func by passing element or iterator to element
   //we can also use erase func to erase a set of elements
   //by giving two iterators
   return 0;
}