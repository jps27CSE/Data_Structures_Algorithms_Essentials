#include<iostream>
using namespace std;

void Bubble_Sort (int array[],int n)
{
    for(int times = 1 ; times <=n-1;times++)
    {
        for(int j = 0 ; j<=n-times-1;j++)
        {
            if(array[j] > array[j+1])
            {
                swap(array[j],array[j+1]);
            }
        }
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

    Bubble_Sort (array, n);

    for(i=0;i<n;i++)
    {
        cout<<array[i]<<endl;
    }

    return 0;
}