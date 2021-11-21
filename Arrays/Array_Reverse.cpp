#include<iostream>
using namespace std;

void Array_Reverse (int array[],int n)
{
  int s = 0;
  int e = n -1;

  while(s<e)
  {
      swap(array[s],array[e]);
      s += 1;
      e -= 1;
  }
}

int main()
{

    cout<<"Enter the Array Elements:";
    int n;
    cin>>n;


    int array[n];

    for (int i = 0; i <n; i++)
    {
        cin>>array[i];
    }

    Array_Reverse (array,n);


    for (int i = 0; i <n; i++)
    {
        cout<<array[i]<<" ";
    }


    return 0;
}