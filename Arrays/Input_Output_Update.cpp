#include<iostream>
using namespace std;

int main(){

  //input 

  int array[100];

  int number,i ;

  cout<<"Enter the Amount:";
  cin>>number;

  for(int i = 0; i < number; i++)
  {
      cin>>array[i];
  }

  //output

  for(int i = 0; i <number; i++)
  {
      cout<<array[i]<<endl;
  }

  //update

  array[0] = 2;

    for(int i = 0; i <number; i++)
  {
      cout<<array[i]<<endl;
  }

}