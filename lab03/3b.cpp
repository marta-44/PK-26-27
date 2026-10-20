#include <iostream>

using namespace std;

int main (){

    int n, a;

    cout << "N: ";
    cin >> n;

    cout << "A: ";
    cin >> a;

    int maks = a; 

    for (int i=1; i < n; i++){

        cout << "A: ";
        cin >> a;

        if ( a > maks) maks = a;

    }

    cout << "Maksimum to: " << maks;

    return 0;
}