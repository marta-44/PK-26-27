#include <iostream>

using namespace std;

int main() {

    int predkosc, przedzial;

    cout << "Prędkość: ";
    cin >> predkosc;

    if (predkosc < 0) przedzial = -1;
    if (predkosc > 0 && predkosc <=10) cout << endl << "Mandat wynosi 50 PLN"; //przedzial = 1;
    if (predkosc > 10 && predkosc <=20) cout << endl << "Mandat wynosi 100 PLN"; //przedzial = 2;
    if (predkosc==21) cout << endl << "Mandat wynosi 110 PLN"; //przedzial = 3;
    if (predkosc==22) cout << endl << "Mandat wynosi 120 PLN";// przedzial = 4;
    if (predkosc==23 || predkosc==27 || predkosc==29) cout << endl << "Mandat wynosi 140 PLN"; //przedzial = 5;
    if (predkosc==26) przedzial = 6;
    if (predkosc==24 || predkosc==25 || predkosc==28) przedzial = 7;
    if (predkosc > 30) przedzial = 8;

    switch(przedzial){

        case 1:
            cout << endl << "Mandat wynosi 50 PLN";

        case 2:
            cout << endl << "Mandat wynosi 100 PLN";

        case 3:
            cout << endl << "Mandat wynosi 110 PLN";

        case 4:
            cout << endl << "Mandat wynosi 120 PLN";

        case 5:
            cout << endl << "Mandat wynosi 140 PLN";

        case 6:
            cout << endl << "Mandat wynosi 145 PLN";

        case 7:
            cout << endl << "Mandat wynosi 150 PLN";

        case 8:
            cout << endl << "Mandat wynosi 200 PLN";

        default:
            cout << endl << "Prędkość nie może być ujemna";
    }

    return 0;
}