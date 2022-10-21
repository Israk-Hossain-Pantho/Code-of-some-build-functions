#include<iostream>
#include<conio.h>
using namespace std ;

void add(int x ,int y)
{
    int sum = x + y ;
    cout<<"  Sum of Two Numbers : "<<sum<<endl;
}
void add(int x ,int y , int z)
{
    int sum = x + y + z ;
    cout<<"  Sum of Three Numbers : "<<sum<<endl;
}
int main()
{

   add(10,20);
   add(10,30);
   add(10,20,30);

    getch();

}
