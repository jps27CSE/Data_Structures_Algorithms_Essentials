#include<iostream>
using namespace std;

void Selection_Sort (int array[],int n) 
{ 
    int i,j;
    
    for(i=0;i<n-1;i++)
    {
        int min = i;

        for(j=i+1;j<n;j++)
        {
            if(array[j] <array[min])
            {
                min = j;
            }
        }
        if(min != i)
        {
            swap(array[i],array[min]);
        }
    }
}

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

   Selection_Sort(array,n);

   cout<<"Sorted Array is :"<<endl;

   for(i=0;i<n;i++)
   {
       cout<<array[i];
   }

   return 0;
  
}