#include<bits/stdc++.h>
using namespace std;

int main()
{
   //use cin for single words and getline(cin,str) for spaces i.e sentences
   string s2 = "vishal";
   cout<<s2<<endl;

   string s1 = "bhanja";
   cout<<s2+s1<<endl;
   cout<<s2.append(s1)<<endl;
   cout<<s1.compare(s2)<<endl;
   s1.clear();
   cout<<s1.empty()<<endl;
   cout<<s2.length()<<endl;
   s2.erase(2,2);
   cout<<s2.find("vi")<<endl;
   s2.insert(2,"sh");
   cout<<s2<<endl;
   cout<<s2.substr(1,3)<<endl;

   return 0;
}