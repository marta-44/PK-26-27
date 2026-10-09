//Napisz program, który wczytuje dwie liczby w wybranej precyzji a następnie oblicza i 
//wypisuje wyniki działań (suma, różnica, iloczyn i iloraz) z dokładnością do 12 miejsca po 
//przecinku.
//Wybierz precyzję:
//[1] pojedyncza precyzja
//[2] podwójna precyzja
//Wybór: 1
//Podaj a: 1
//Podaj b: 3
//Suma: 4.000000000000
//Różnica: -2.000000000000
//Iloczyn: 3.000000000000
//Iloraz: 0.333333343267

#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    
    int wybor;
    cout << "Wybierz precyzję:" << endl << "[1] pojedyncza precyzja" << endl << "[2] podwójna precyzja" <<endl;
    cout << "Wybór: ";
    cin >> wybor;

    

    cout << fixed << setprecision(12);
    if (wybor == 1) {
        float a, b;
        cout << "Podaj a: ";
        cin >> a;
        cout << endl << "Podaj b: ";
        cin >> b;
        cout << "Suma: " << a+b ;

         }
    else{ if (wybor == 2) {
        double a, b;
        cout << "Podaj a: ";
        cin >> a;
        cout << endl << "Podaj b: ";
        cin >> b;
            }
        else {cout<<endl<<"Niepoprawny wybor"<<endl; }}


    

    
    return 0;
}