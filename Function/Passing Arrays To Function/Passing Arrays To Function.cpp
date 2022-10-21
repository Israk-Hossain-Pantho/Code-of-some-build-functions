#include<iostream>
#include<conio.h>
using namespace std ;

void displayArray(int num[] )
{
  cout<<"  Display Array Number : ";

  for(int i=0 ;i<=4 ; i++)
    {
        cout<<num[i]<<" ";
    }

}

int main()
{

  int number[5]={10,20,30,40,50};
  displayArray(number);

  getch();

}
