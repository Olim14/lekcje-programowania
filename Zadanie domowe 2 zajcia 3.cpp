#include <iostream>
using namespace std;


int main()
{

    //Napisz program, kt�ry wczytuje kolejne liczby ca�kowite od u�ytkownika i je ze sob� mno�y, dop�ki iloczyn nie przekroczy 10
    int iloczyn=1;
    int liczba;

    while (iloczyn <= 100){
        cin>> liczba;
        iloczyn*=liczba;
    cout<<"iloczyn: "<<iloczyn<< endl;
    }
}
