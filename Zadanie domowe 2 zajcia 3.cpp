#include <iostream>
using namespace std;


int main()
{

    //Napisz program, który wczytuje kolejne liczby ca³kowite od u¿ytkownika i je ze sob¹ mno¿y, dopóki iloczyn nie przekroczy 10
    int iloczyn=1;
    int liczba;

    while (iloczyn <= 100){
        cin>> liczba;
        iloczyn*=liczba;
    cout<<"iloczyn: "<<iloczyn<< endl;
    }
}
