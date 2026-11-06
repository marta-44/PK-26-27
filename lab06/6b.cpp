//Napisz program, który wykorzystując możliwości konstruowania funkcji, wczytuje jedno-, dwu- lub 
//trzycyfrową liczbę dodatnią lub ujemną i wypisuje na ekran jej wartość słownie.
//Uwaga:
//Użyj konstrukcji programu, w której dostępne są trzy funkcje przyjmujące jako parametr liczbę, a wypisują wartość odpowiedniej części liczby słownie:
//void jednosci(int)
//void dziesiatki(int)
//void setki(int)
#include <iostream>

using namespace std;

int main(){

    int a;
    cin >> a;
    int pomoc; 
    string slowo;
    if (a < 0) slowo = "minus ";
    else while (a>0){
        pomoc = a%10;
        a=a/10;
        
    }

    return 0;
}