#include<iostream>
#include<conio.h>
using namespace std ;

int addition (int,int);

int main()
{
   cout<<"  Sum = "<<addition(10,20);
   cout<<"\n  Sum = "<<addition(30,40);
   cout<<"\n  Sum = "<<addition(50,60);


   getch();

}
int addition ( int a , int b )
{
   int sum = a + b ;
   return sum ;
}
