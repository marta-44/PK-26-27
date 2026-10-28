#include <iostream>

using namespace std;

int main(){

    char znak;

    cout << "Znak: ";
    cin >> znak;

    int kod = static_cast<int>(znak);

    if( kod >=48 && kod <=57) cout << endl << "Rodzaj: cyfra";
    else if( kod >=65 && kod <=90) cout << endl << "Rodzaj: duża litera";
    else if( kod >=97 && kod <=122) cout << endl << "Rodzaj: mała litera";
    else cout << "Rodzaj: inny znak";

    cout << endl << "Kod dzziesiętnie: " << kod;
    cout << endl << "Kod szesnastkowo: " << showbase << hex << kod;


    return 0;
}