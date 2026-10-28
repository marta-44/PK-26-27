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
        cout << "Suma: " << a+b << endl;
        cout << "Różnica: " << a-b <<endl;
        cout << "Iloczyn: " <<  a*b <<endl;
        cout << "Iloraz: " << a/b <<endl;

         }
    else{ if (wybor == 2) {
        double a, b;
        cout << "Podaj a: ";
        cin >> a;
        cout << endl << "Podaj b: ";
        cin >> b;
        cout << "Suma: " << a+b << endl;
        cout << "Różnica: " << a-b <<endl;
        cout << "Iloczyn: " <<  a*b <<endl;
        cout << "Iloraz: " << a/b <<endl;
            }
        else {cout<<"Niepoprawny wybór"<<endl; }}


    

    
    return 0;
}