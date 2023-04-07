#include<iostream>
using namespace std;

/*int maxrainwater1(int arr1[],int n)
{
    int res1 = 0;
    for(int i=1;i<n-1;i++)   //water cannot be trapped on border towers so exclude them
    {
        int lmax = arr1[i];
        for(int j=0;j<i;j++)
        {
            lmax = max(lmax,arr1[j]);
        }
        int rmax = arr1[i];
        for(int j=i+1;i<n;j++)
        {
            rmax = max(rmax,arr1[j]);
        }
        res1 += min(lmax,rmax) - arr1[i];
    }
    return res1;
}*/

int getWater(int arr[], int n)
{
        int res = 0;
    	int lMax[n];
    	int rMax[n];

    	lMax[0] = arr[0];
    	for(int i = 1; i < n; i++)
    		lMax[i] = max(arr[i], lMax[i - 1]);


    	rMax[n - 1] = arr[n - 1];
    	for(int i = n - 2; i >= 0; i--)
    		rMax[i] = max(arr[i], rMax[i + 1]);

    	for(int i = 1; i < n - 1; i++)
    		res = res + (min(lMax[i], rMax[i]) - arr[i]);

	return res;
}

int main()
{
   int n;
   cout<<"enter the no of towers\n";
   cin>> n;

   int theights[n];
   cout<<"enter the heights of the towers\n";
   for(int i=0;i<n;i++)
   {
       cin>> theights[i];
   }

   cout<<"the heights of the towers are:\n";
   for(int i=0;i<n;i++)
   {
       cout<<theights[i]<<" ";
   }
   cout<<endl;

   //int result1 = maxrainwater1(theights,n);
   int result2 = getWater(theights,n);
   //cout<<result1<<endl;
   cout<<result2<<endl;

   return 0;
}