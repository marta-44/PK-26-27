//Napisz program wykorzystujący rekurencyjne wywołania funkcji w celu wypisania na ekranie liczby N 
//podanej w systemie dziesiętnym w postaci liczby w systemie o podstawie 2, 5, 7, 8 i 16.
//N: 17
//Binarnie: 10001
//Piątkowo: 32
//Siódemkowo: 23
//Ósemkowo: 21
//Szesnastkowo: 11
#include <iostream>

using namespace std;

int systemx(int liczba, int a){

    int pomoc=0, i=1;
    while (liczba > 0){

        pomoc = pomoc + (liczba%a)*i;
        liczba=liczba/a;
        i=i*10;

    }
}

int main(){

    int n;
    cin >> n;

    cout << systemx(n, 2);


    return 0;
}