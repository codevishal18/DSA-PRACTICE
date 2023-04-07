#include<bits/stdc++.h>
using namespace std;

int countdistinct(int arr[],int n)
{
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }
    return s.size();
    //we can directly do 
    /* unordered_set<int> s(arr,arr+n);
       return s.size(); */
}

int main()
{
   int arr[10] = {10,20,30,10,40,20,30,70,80,40};
   int result = countdistinct(arr,10);
   cout<<result<<endl;
   return 0;
}