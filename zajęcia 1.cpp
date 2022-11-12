#include<iostream>
using namespace std;
int main()
{
   string login;
   string haslo;
   string h;
   string l;
   cout<< "podaj login:"<<endl;
   cin>> login;
   cout<< "podaj haslo:"<<endl;
   cin>>haslo;

   cout<< "zaloguj sie. Podaj login:"<<endl;
   cin>> l;
   cout<< "Podaj haslo: "<<endl;
   cin>> h;

   if(login== l && haslo==h)
   {
   cout<< "zalogowano";
   }
   else
    { cout<< "niezalogowano";
   }
}
