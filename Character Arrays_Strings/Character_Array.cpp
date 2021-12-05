#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    char a[] = {'a','b','c'};
    cout<<a<<endl;

    char b[] = "abc";
    cout<<b<<endl;

    cout<<strlen(a)<<endl;
    cout<<sizeof(b)<<endl;
}