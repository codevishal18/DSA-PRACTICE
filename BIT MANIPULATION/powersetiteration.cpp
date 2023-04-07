#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printPowerSet(string str)
{
    int n = str.length();
    int powsize = pow(2,n);

    for(int counter=0;counter<powsize;counter++)
    {
        for(int j=0;j<n;j++)
        {
            if((counter&(1<<j))!=0)
            {
                cout<<str[j];
            }
        }
        cout<<"\n";
    }
}

int main()
{
   string s = "abc";

   printPowerSet(s);

   return 0;
}