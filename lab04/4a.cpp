#include <iostream>

using namespace std;

int main(){

    int podstawa, wykladnik;
    double wynik=1;

    cout << "Podstawa: ";
    cin >> podstawa;

    cout << endl << "Wykładnik: ";
    cin >> wykladnik;

    if(wykladnik >= 0){

        for (int i=1; i<=wykladnik ; i++){
            wynik = wynik*podstawa;
        }
        cout << podstawa << " ^ " << wykladnik <<" = " << wynik;
    }
    else cout << endl << "Wykladnik nie może być ujemny";

    return 0;
}