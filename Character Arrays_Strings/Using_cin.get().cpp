#include<iostream>
using namespace std;

int main()
{
    char temp = cin.get();

    while(temp!='\n')
    {
        cout<<temp;
        temp = cin.get();
    }
}