#include<iostream>
#include<conio.h>
using namespace std ;

void addition (int,int);
void substraction (int,int);
void multiplication (int,int);
void division (int,int);


int main()
{
   addition(10,20);
   addition(30,40);

   cout<<"\n";

   substraction(30,20);
   substraction(40,20);

   cout<<"\n";

   multiplication(5,4);
   multiplication(6,5);

   cout<<"\n";

   division(10,3);
   division(20,3);

   getch();

}

void addition ( int a , int b )
{
   int sum = a + b ;
   cout<<"  Sum = "<<sum<<endl ;
}
void substraction ( int a , int b )
{
   int sub = a - b ;
   cout<<"  Substraction = "<<sub<<endl ;
}
void multiplication ( int a , int b )
{
   int mul = a * b ;
   cout<<"  Multiplication = "<<mul<<endl ;
}
void division ( int a , int b )
{
   float div = (float)a / b ;
   cout<<"  Division = "<<div<<endl ;
}
