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

    cout << endl << ""

    return 0;
}