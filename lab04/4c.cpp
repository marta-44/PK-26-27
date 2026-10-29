#include <iostream>

using namespace std;

int main() {

    int predkosc, przedzial=-3;

    cout << "Prędkość: ";
    cin >> predkosc;

    if (predkosc < 0) goto blad; //cout << endl << "Prędkość nie może być ujemna";// 
   else  if (predkosc > 0 && predkosc <=10) przedzial = 1; //cout << endl << "Mandat wynosi 50 PLN"; //
   else if (predkosc > 10 && predkosc <=20) przedzial = 2;//cout << endl << "Mandat wynosi 100 PLN"; //
   else if (predkosc==21) przedzial = 3;// cout << endl << "Mandat wynosi 110 PLN"; //
   else if (predkosc==22) przedzial = 4;//cout << endl << "Mandat wynosi 120 PLN";// 
   else if (predkosc==23 || predkosc==27 || predkosc==29) przedzial = 5;// cout << endl << "Mandat wynosi 140 PLN"; //
   else if (predkosc==26) przedzial = 6; //cout << endl << "Mandat wynosi 145 PLN";//
   else if (predkosc==24 || predkosc==25 || predkosc==28) przedzial = 7; //cout << endl << "Mandat wynosi 150 PLN";// 
   else if (predkosc > 30) przedzial = 8; //cout << endl << "Mandat wynosi 200 PLN";//

    switch(przedzial){

        case 1:
            cout << endl << "Mandat wynosi 50 PLN"; break;

        case 2:
            cout << endl << "Mandat wynosi 100 PLN"; break;

        case 3:
            cout << endl << "Mandat wynosi 110 PLN"; break;

        case 4:
            cout << endl << "Mandat wynosi 120 PLN"; break;

        case 5:
            cout << endl << "Mandat wynosi 140 PLN"; break;

        case 6:
            cout << endl << "Mandat wynosi 145 PLN"; break;

        case 7:
            cout << endl << "Mandat wynosi 150 PLN"; break;

        case 8:
            cout << endl << "Mandat wynosi 200 PLN"; break;

        default:
            cout << endl << "Prędkość nie może być ujemna"; break;
    }

    blad: 
    cout<< ":(((((((((((((((((";

    return 0;
}