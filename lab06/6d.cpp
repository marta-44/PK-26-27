//Napisz program, który wykorzystując rekurencyjne wywołania funkcji obliczy wartość silni 
//dla podanej liczby naturalnej N. Program sprawdza poprawność podanego N i 
//wypisuje komunikat "N musi być nieujemne" w przypadku niepoprawnej wartości.
#include <iostream>

using namespace std;

int silnia(int liczba, double silna){
    if(liczba == 1 || liczba == 0) return 1;
    else {

        silna = liczba * silnia(liczba-1, silna);
        return silna;

    }

}


int main(){

    int liczba;
    cout << "N: ";
    cin >> liczba;
    double silna = 1;
    cout << endl << "Silnia: " << silnia(liczba, silna);

    return 0;
}