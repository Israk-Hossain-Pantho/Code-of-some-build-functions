#include<iostream>
#include<conio.h>
using namespace std ;

 int display (int *num)
 {
    *num = 20 ;
 }

int main()
{
  int x = 10 ;
  cout<<"  Before Calling The Function X : "<<x<<endl;

  display (&x);
  cout<<"  Before Calling The Function X : "<<x<<endl;

  getch();

}
