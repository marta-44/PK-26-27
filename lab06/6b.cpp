//Napisz program, który wykorzystując możliwości konstruowania funkcji, wczytuje jedno-, dwu- lub 
//trzycyfrową liczbę dodatnią lub ujemną i wypisuje na ekran jej wartość słownie.
//Uwaga:
//Użyj konstrukcji programu, w której dostępne są trzy funkcje przyjmujące jako parametr liczbę, a wypisują wartość odpowiedniej części liczby słownie:
//void jednosci(int)
//void dziesiatki(int)
//void setki(int)
#include <iostream>

using namespace std;

void liczba (int cyfra){

    if(cyfra == 1) cout << "sto ";
    else if (cyfra == 2) cout << "dweście ";
    else if (cyfra ==3) cout << "trzysta ";


}


int main(){

    int a;
    cin >> a;
    int pomoc1, pomoc2, i=100; 
    string slowo;
    if (a < 0) {slowo = "minus "; a=a*(-1);}
    while (a>0){
        pomoc1 = a/i;
        pomoc2 = a%i;
        i=i/10;
        a=pomoc2;
        if(pomoc1>0){
           void liczba (pomoc1);
        }
        
    }

    return 0;
}