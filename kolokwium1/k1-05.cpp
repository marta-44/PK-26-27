#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double cisn, nowe;
    int jedn;
    cout << "jednostka: " << endl << "[1] kPa" << endl << "[2] hPa";
    cin >> jedn;
    cout << endl;
    cin >> cisn;

    cout << fixed << setprecision(2);
    if (cisn>=0){
    if (jedn == 1){
        nowe = cisn * 10;
        cout << " = " << nowe;

    } else if (jedn == 2){
        nowe = cisn / 10;
        cout << " = " << nowe;
    } else cout << "Niepoprawny wybór jednostki.";}
    else if (cisn < 0) cout << "Wartość nie może być ujemna.";



    return 0;
}