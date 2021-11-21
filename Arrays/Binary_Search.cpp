#include<iostream>
using namespace std;

int BinarySearch (int array[],int n , int key)
{

    int s = 0;
    int e = n -1;

    int mid = (s+e)/2;

    while(s<=e)
    {
        if(array[mid] == key)
        {
            return mid;
        }
        else if( array[mid] < key)
        {
            e = mid - 1;
        }
        else if ( array[mid] > key)
        {
            s = mid + 1;
        }
    }
    return -1;

}

int main()
{  
    cout<<"Enter the element number :";
    int n;
    cin>>n;

    int array[n];

    cout<<"Enter Array elements:";
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    cout<<"Enter the Key :";
    int key;
    cin>>key;


    int index = BinarySearch (array,n,key);

    if(index != -1)
    {
        cout<<key<<" Found at position "<<index;
    }
    else
    {
        cout<<"Key not found";
    }

   return 0;
}