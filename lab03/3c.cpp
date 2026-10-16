#include <iostream>

using namespace std;

int main(){
    
    int n, a, suma;
    cout << "N: ";
    cin >> n;
    
    if (n > 0){
    cout << endl << "A: ";
    cin >> a;
    if ( a > 0){
        
        while ( n > 0 ){
            suma = suma + a;
            n--;
            a ++;
        }

        cout << "Suma = " << suma;
        
    }
    else cout << endl << "A nie jest liczba naturalna";
    }
    else cout << endl << "N musi być większe od zera";
    return 0;
}