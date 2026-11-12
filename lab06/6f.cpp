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

void systemx(int liczba, int a){

    int pomoc=0, i=1;
    if(a<10){
    while (liczba > 0){

        pomoc = pomoc + (liczba%a)*i;
        liczba=liczba/a;
        i=i*10;

    }
    cout << pomoc;}
    else if (a==16){

        hellnahhhh
    }
}

int main(){

    int n;
    cout << "N: ";
    cin >> n;

    cout << "Binarnie: "; systemx(n, 2);
    cout << endl << "Piątkowo: "; systemx(n, 5);
    cout << endl << "Siódemkowo: "; systemx(n, 7);
    cout << endl << "Ósemkowo: "; systemx(n, 8);
    cout << endl << "Szesnastkowo: "; systemx(n, 16;)



    return 0;
}