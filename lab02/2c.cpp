//Napisz program, który sprawdzi czy podana liczba całkowita w systemie dziesiętnym jest liczbą parzystą i czy jest podzielna przez 8 i 16.
// Program wypisuje podzielność słowami "TAK" i "NIE" oraz wypisuje podaną liczbę w postaci ósemkowej i szesnastkowej.
//Podaj liczbę: 27
//Parzysta: NIE
//Podzielna przez 8: NIE                                                          
//Podzielna przez 16: NIE
//Ósemkowo: 33
//Szesnastkowo: 1b
#include <iostream>

using namespace std;

int main(){

    int a;

    cout << "Podaj liczbę: ";
    cin >> a;

    cout << endl << "Parzysta: ";
    if( a%2==0 ){
        cout << "TAK" << endl;
    }
    else cout << "NIE" << endl;

    cout << endl << "Podzielna przez 8: ";
    if( a%8==0 ){
        cout << "TAK" << endl;
    }
    else cout << "NIE" << endl;

    cout << endl << "Podzielna przez 16: ";
    if( a%16==0 ){
        cout << "TAK" << endl;
    }
    else cout << "NIE" << endl;


    cout << "Ósemkowo: ";
    cout << oct << a << endl;

    cout << "Szesnastkowo: ";
    cout << hex << a <<endl;

    

    return 0;
}