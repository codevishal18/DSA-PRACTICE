#include<bits/stdc++.h>
using namespace std;

int freq(int arr[],int n)
{
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    for(auto x:m)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
}

int main()
{
   int arr[5] = {50,50,10,40,10};
   freq(arr,5);
   return 0;
}