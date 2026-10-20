#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    string jednostka;
    float temperatura, tf, tc, tk;

    cout << "Jednostka: ";
    cin >> jednostka;

    cout << endl << "Temperatura: ";
    cin >> temperatura;

    cout << fixed <<setprecision(2);

    if (jednostka == "F") {

        tf = temperatura;
        tc = (tf - 32)*5/9;
        tk = tc + 273.15;
        cout << endl << "F = " <<tf<<endl<<"C = "<<tc<<endl<<"K = "<<tk;

    }
    else if (jednostka == "K"){

        tk = temperatura;
        tc = tk - 273.15;
        tf = (tc * 9 / 5) + 32;
        cout << endl << "F = " <<tf<<endl<<"C = "<<tc<<endl<<"K = "<<tk;
    }
    else if (jednostka == "C") {

        tc = temperatura;
        tf = (tc * 9/5) + 32;
        tk = tc + 273.15;
        cout << endl << "F = " <<tf<<endl<<"C = "<<tc<<endl<<"K = "<<tk;

    } else cout <<endl << "Nieprawidłowa jednostka";

    return 0;
}