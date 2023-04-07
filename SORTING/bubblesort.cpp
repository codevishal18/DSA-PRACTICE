#include<iostream>
using namespace std;
   
int main()
{
   int n;
   cout<<"enter the no of elements of the array\n";
   cin>> n;

   int array[n];
   cout <<"enter the elements of the array:\n";
   for(int i=0;i<n;i++)
   {
       cin>> array[i];
   }

   //bubble sort in this we compare adjacent elements of the array O(n^2), no extra space, stable(same elements in the same order)
   int counter = 0;

   while(counter<n-1)  //in every iteration of the while loop the max element moves to the end 
   { 
       bool swapped = false;
       for(int j=0;j<n-counter-1;j++)
       {
           if(array[j]>array[j+1])
           {
               int temp = array[j];
               array[j] = array[j+1];
               array[j+1] = temp;
               swapped = true; 
           }
       }
       if(swapped==false)  //if no swapping occurs the array is already sorted
       {
           break;
       }
       counter++;
   }

   cout<<"the sorted array afte bubble sort is:\n";
   for(int i=0;i<n;i++)
   {
       cout<<array[i]<<" ";
   }
   return 0;
}