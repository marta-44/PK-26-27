#include <iostream>

using namespace std;


int main(){

    int n=0, pomiar, maks, min;
    while(n<=0){
        cout <<"Liczba pomiarów: ";
        cin >> n;
        if (n<=0 ) cout << "Liczba pomiarów musi być większa od zera.";
    }
    cout << "Podaj temperatury: ";
    cin>>pomiar;
    maks=pomiar;
    min=pomiar;
    for (int i=1; i<n; i++){
        cin >> pomiar;
        if (pomiar > maks) maks=pomiar;
        if(pomiar < min) min=pomiar;
    }
    int roznica = maks - min;
    cout << "Najwyższa temperatura: " << maks;
    cout<< "Najniższa temperatura: " << min;
    cout<< "Różnica: " << roznica;
    return 0;
}