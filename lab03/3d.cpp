#include <iostream>

using namespace std;

int main(){

    int n, i=1;
    unsigned long long silnia=1;

    cout << "N: ";
    cin >> n;

    if (n > 0){
        while (i <= n){
            silnia = silnia * i;
            i++;
           // cout<<silnia<<endl;

        }

    cout << "Silnia: " << silnia;
    }
    else if (n == 0) cout << "Silnia: " << 1;
    else cout << "N musi być nieujemne";
    return 0;
}