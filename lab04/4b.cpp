#include <iostream>

using namespace std;

int main () {

    int wiersz, kolumna, nr_komorki=1;

    cout << "Podaj ilość wierszy: ";
    cin >> wiersz ;

    cout << endl << "Podaj ilosc kolumn: ";
    cin >> kolumna;
    cout<<endl;
    for (int w = 0 ; w < wiersz ; w++) {

            for (int k=0 ; k < kolumna ; k++){
                if ((k+w)%2==0)
                cout << "##";
                else cout<<"  ";
                nr_komorki++;
            }
            cout<<endl;

    }

    return 0;
}