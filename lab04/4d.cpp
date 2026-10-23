#include <iostream>

using namespace std;

int main(){

    int wysokosc;
    cout << "Wysokość: ";
    cin >> wysokosc;

    int gwiazdki = 1, spacje = wysokosc - 1;

    for (int i = 0; i < wysokosc ; i++){

        for (int s = 0; s<spacje ; s++){
            cout << " ";
        }
        spacje --;
        for(int g = 0; g<gwiazdki ; g++){
            cout << "*";
        }
        gwiazdki += 2;
        cout << endl;
    }

    return 0;
}