#include<iostream>
#include<conio.h>
using namespace std ;

void display (int a = 10 , int b = 20 )
{
    cout<<"  Display Integer A & B : "<<a<<"  "<<b<<endl;
}
int main()
{
   display();
   display(15);
   display(45,50);
   getch();

}
