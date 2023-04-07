#include<bits/stdc++.h>
using namespace std;

struct MyHash
{
   int bucket;
   list<int> *table;
   MyHash(int x)   //taking size of hash table as input
   {
       bucket = x;
       table = new list<int>[x];
   }

   void insert(int key)
   {
      int i = key % bucket;
      table[i].push_back(key);
   }

   void remove(int key)
   {
      int i = key % bucket;
      table[i].remove(key);
   }

   bool search(int key)
   {
      int i = key % bucket;
      for(auto x:table[i])
      {
         if(x==key)
         {
            return true;
         }
      }
      return false;
   }
};

int main()
{
   MyHash ht1 = MyHash(7);
   ht1.insert(53);
   bool t = ht1.search(53);
   cout<<t<<endl;
   ht1.remove(53);
   bool t1 = ht1.search(53);
   cout<<t1<<endl;
   return 0;
}