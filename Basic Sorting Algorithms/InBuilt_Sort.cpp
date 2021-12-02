#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
   cout<<"Enter the Element Number:";
   int n;
   cin>>n;

   int array[n];

   cout<<"Enter the array elements:";
   int i;
   for(i=0;i<n;i++)
   {
       cin>>array[i];
   }
   
   sort(array,array+n);

   for(i=0;i<n;i++)
   {
       cout<<array[i];
   }
 

}