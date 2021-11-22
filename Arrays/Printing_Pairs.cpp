#include<iostream>
using namespace std;

void Printing_Pair(int array[], int n)
{
    int i,j,x,y;

   for (i = 0 ; i < n ; i++)
   {
        x = array[i];

       for(j = i+1 ; j < n ; j++)
       {
            y = array[j];
           cout<<x<<" "<<y<<endl;
           
       }
       cout<<endl;
   }
}

int main()
{
    cout<<"enter the number of elements"<<endl;
    int n;
    cin>>n;

    int array[n],i;

    cout<<"enter the array elements"<<endl;

    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }

    Printing_Pair(array,n);

    return 0;
}