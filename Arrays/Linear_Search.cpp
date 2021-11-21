#include<iostream>
using namespace std;

int Linear_Search(int array[],int n , int key)
{
    for(int i = 0; i < n; i++)
    {
        if(array[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
   cout<<"Enter the Number of Elements";
   int n;
   cin>>n;

   int array[n];

   for(int i = 0; i < n; i++)
   {
       cin>>array[i];
   }

   cout<<"Enter the key";
   int key;
   cin>>key;

   int index = Linear_Search(array,n,key);

   if(index != -1)
   {
       cout<<key<<"is at position "<<index;
   }
   else
   {
       cout<<"Key not found";
   }

   return 0;

}