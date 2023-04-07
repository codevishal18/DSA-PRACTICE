#include<bits/stdc++.h>
using namespace std;

struct MyHash
{
   int *arr;
   int cap,size;
   MyHash(int c)
   {
       cap = c;
       size = 0;
       for(int i=0;i<cap;i++)
       {
           arr[i]=-1;
       }
   }

   int hash(int key)
   {
       return key % cap;
   }

   bool search(int key)
   {
       int h = hash(key);
       int i = h;
       while(arr[i]!=-1)
       {
           if(arr[i]==key)
           {
               return true;
           }
           i = (i+1)%cap;  //circular traversal
           if(i==h) return false;  //if we return to same slot for the same key
       }
       return false;  //found a empty slot
   }

   bool insert(int key)
    {
        if(size==cap)
            return false;
        int i=hash(key);
        while(arr[i]!=-1 && arr[i]!=-2 && arr[i]!=key)
            i=(i+1)%cap;
        if(arr[i]==key)   //same key already present
            return false;
        else{
            arr[i]=key;
            size++;
            return true;
        }
    }

    bool erase(int key)
    {   
        int h=hash(key);
        int i=h;
        while(arr[i]!=-1){
            if(arr[i]==key){
                arr[i]=-2;
                return true;
            }
            i=(i+1)%cap;
            if(i==h)
                return false;
        }
        return false;
    }
};

int main()
{
   MyHash m1(7);
   bool a = m1.insert(10);
   bool d = m1.insert(20);
   bool e = m1.insert(30);
   bool b = m1.search(20);
   cout<<b<<endl;
   bool c = m1.search(40);
   cout<<c<<endl;
   bool f = m1.erase(20);
   cout<<f<<endl;
   bool g = m1.search(20);
   cout<<g<<endl;
   return 0;
}