#include <iostream>

using namespace std;

int main(){

    int a, b;
    cout << "Podaj a, b: ";
    cin >> a >> b;

    int licznik = 0, suma=0;
    if (a<=b){
        for (int i=a; i<=b; i++){
                if (i%2!=0 && i%3==0){
                    licznik++;
                    suma=suma+i;
                }
        }
    }
    else {cout << "Błąd: A musi być mniejsze lub równe B."; licznik=-1;}

    if(licznik>0) cout << "Suma liczb nieparzystych i podzielnych przez 3 z przedziału [" << a << "," << b << "] wynosi: " << suma;
    else if (licznik==0) cout << "Brak liczb spełniających warunek.";
    return 0;
}