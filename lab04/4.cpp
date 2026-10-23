#include <iostream>

using namespace std;

int main(){

    int liczba;

    cout << "do ilu liczyć: ";
    cin >> liczba;

    for (int i=1; i<=liczba ; i++){

        cout << endl << i;

    }

    cout << endl << "odliczanie w dół: " << endl;
    for ( int i=liczba; i>0 ; i--){
        cout << endl << i;
    }

    cout << endl << "odliczanie co drugi od 0: " << endl;
    for ( int i=0; i <= liczba ; i+=2){
        cout << endl << i;
    }

    return 0;
}