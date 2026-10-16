#include <iostream>

using namespace std;

int main(){

    int n, silnia = 1, i=1;

    cout << "N: ";
    cin >> n;
    if (n > 0){
    while (i <= n){
        silnia = silnia * i;
        i ++;

    }

    cout << "Silnia: " << silnia;
    }
    else if (n == 0) cout << "Silnia: " << n;
    else cout << "N musi być nieujemne";
    return 0;
}