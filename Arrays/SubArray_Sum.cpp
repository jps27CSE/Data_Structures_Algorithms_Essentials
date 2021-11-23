#include<iostream>
using namespace std;

int SubArray_Sum (int array[],int n)
{
    int largestSum = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            int subArraySum = 0;

            for(int k = i; k<=j; k++)
            {
               subArraySum += array[k];
            }
            largestSum = max(largestSum, subArraySum);
        }
    }
    return largestSum;
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

    cout<<SubArray_Sum (array, n);

    return 0;
}