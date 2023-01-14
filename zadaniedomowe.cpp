/*Napisz program, ktory policzy sume wszystkich wielokrotnosci liczb 3 lub 5 mniejszych od 1000.
 Program ma za zadanie zwrócić SUMĘ wszystkich liczb naturalnych mniejszych od 1000, które sš podzielne przez 3 lub 5.*/

#include<iostream>
using namespace std;

   bool czypodzielnaprzez3lub5 (int x)
   {    if (x%3==0|| x%5==0)
        return true;
       else return false;}

int main()

{    int suma = 0;
      for(int i= 3; i<1000; i ++)
    {
    if( czypodzielnaprzez3lub5( i ) == true)
    {
        cout<<i<< endl;
        suma = suma + i;
        }

    }
    cout<< suma;
    }

