#include <iostream>

using namespace std;

int main(){

    int n;
    cout << "Podaj rozmiar: ";
    cin >> n;
    if(n%2!=0){
        if(n>=3 && n<=21){

            int srodek = (n/2)+1;
            for (int i=1; i<=n; i++){
                for (int j=1; j<=n; j++){
                    if(i == srodek || j == srodek){
                        cout << "+";
                    }
                    else cout << "-";
                }
                cout << endl;
            }

        }
        else cout << "Nieprawidłowy rozmiar.";
    }
    else if(n%2==0) cout << "Nieprawidłowy rozmiar.";


    return 0;
}