#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std ;
int main()
{
   while(1)
   {
      int guessNumber , randomNumber ;

      cout<<"\n  Enter Your Guess Between 1 To 5 : ";
      cin>>guessNumber;

      randomNumber = rand()%5 + 1;

     if ( guessNumber == randomNumber )
      {
        cout<<"  You Have Won "<<endl ;
      }
     else
      {
        cout<<"  You Have Lost "<<endl ;
        cout<<"  Random Number Was : "<<randomNumber<<endl ;

      }

    }


    getch();

}
