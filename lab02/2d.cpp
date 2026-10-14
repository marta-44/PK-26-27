//Napisz program, który przyjmuje dwa parametry:
//parametr pierwszy to jedna z opcji: 
//1 – przeliczanie jednostek Celsjusza na Fahrenheita,
//2 – przeliczanie jednostek Fahrenheita na Celsjusza,
//parametr drugi to liczba rzeczywista wyrażająca temperaturę.
//Program, w zależności od parametru pierwszego, przelicza podaną w parametrze drugim 
//mperaturę między jednostkami Fahrenheita i Celsjusza. Po przeliczeniu program wypisuje obliczoną wartość z dokładnością do dwóch miejsc
//o przecinku na ekran.
#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    int wybor;

    cout << fixed << setprecision(2);
    cout<< "Wybierz sposób konwersji: " << endl << "[1] Celsjusza na Fahrenheita" << endl << "[2] Fahrenheita na Celsjusza" <<endl;
    cout << "Wybór: ";
    cin >> wybor;

    int zero = -273;
    
    float temp;
    if (wybor == 1) {
        cout << "Podaj temperature: ";
        cin>>temp;
        if(temp >= -273.15) 
        cout << endl << temp << " st. Celsjusza to " <<(temp * 9 / 5)+32 << " st. Fahrenheita";
        else cout<<"Zbyt zimno na liczenie!" ;
    }
    else if (wybor == 2) {
        cout << "Podaj temperature: ";
        cin>>temp;
        int t = ((temp - 32) * 5/9);
        if(t > -273.15)
        cout << endl << temp << " st. Fahrenheita to " << (temp - 32) * 5/9 << " st Celsjusza";
        else cout<<"Zbyt zimno na liczenie!" ;
    }

    return 0;
}