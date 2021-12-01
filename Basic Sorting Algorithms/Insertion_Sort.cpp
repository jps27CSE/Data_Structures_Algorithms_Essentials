#include<iostream>
using namespace std;

void Insertion_Sort (int array[],int n) 
{
  int i,j,temp;

  for(i=1;i<n;i++)
  {
      temp = array[i];
      j=i-1;

      while(j>=0 && array[j]>temp)
      {
          array[j+1] = array[j];
          j--;
      }

      array[j+1]=temp;

  }

}

int main()
{

   cout<<"Enter the number of element:";
   int n;
   cin>>n;

   int array[n];

   cout<<"Enter array elements:";
   int i;
   for(i=0;i<n;i++)
   {
       cin>>array[i];
   }

   Insertion_Sort(array,n);

   cout<<"Sorted Array is:";
   for(i=0;i<n;i++)
   {
       cout<<array[i];
   }

    return 0;
}