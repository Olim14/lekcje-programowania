#include <iostream>

using namespace std;

int main()

{
    string imie;
    int wiek;
    cin>> imie;
    cin>> wiek;

    if( wiek >= 18){
        cout<< "Hej "  + imie   +    ", jestes pelnoletni";}
        else cout<< " Hej "  + imie+ ", nie jestes pelnoletni";

}
