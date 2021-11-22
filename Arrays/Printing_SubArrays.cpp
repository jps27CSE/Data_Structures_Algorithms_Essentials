#include <iostream>
using namespace std;

void Printing_SubArrays (int array[],int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k = i ; k<=j ; k++)
            {
                cout<<array[k]<<",";
            }
            cout<<endl;
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

    Printing_SubArrays(array,n);

    return 0;
}