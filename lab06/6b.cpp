//Napisz program, który wykorzystując możliwości konstruowania funkcji, wczytuje jedno-, dwu- lub 
//trzycyfrową liczbę dodatnią lub ujemną i wypisuje na ekran jej wartość słownie.
//Uwaga:
//Użyj konstrukcji programu, w której dostępne są trzy funkcje przyjmujące jako parametr liczbę, a wypisują wartość odpowiedniej części liczby słownie:
//void jednosci(int)
//void dziesiatki(int)
//void setki(int)
#include <iostream>

using namespace std;

void setki (int cyfra){

    if(cyfra == 1) cout << "sto ";
    else if (cyfra == 2) cout << "dwaście ";
    else if (cyfra ==3) cout << "trzysta ";
    else if (cyfra ==4) cout << "czterysta ";
    else if (cyfra ==5) cout << "piećset ";
    else if (cyfra ==6) cout << "sześćset ";
    else if (cyfra ==7) cout << "siedemset ";
    else if (cyfra ==8) cout << "osiemset ";
    else if (cyfra ==9) cout << "dziewięćset ";

}

void dziesiatki (int cyfra){

    if (cyfra == 2) cout << "dwadzieścia ";
    else if (cyfra ==3) cout << "trzydzieści ";
    else if (cyfra ==4) cout << "czterdzieści ";
    else if (cyfra ==5) cout << "piećdziesiąt ";
    else if (cyfra ==6) cout << "sześćdziesiąt ";
    else if (cyfra ==7) cout << "siedemdziesiąt ";
    else if (cyfra ==8) cout << "osiemdziesiąt ";
    else if (cyfra ==9) cout << "dziewięćdziesiąt ";

}

void liczby1 (int cyfra){

    if(cyfra == 1) cout << "jede";
    else if (cyfra == 2) cout << "dwa";
    else if (cyfra ==3) cout << "trzy";
    else if (cyfra ==4) cout << "czter";
    else if (cyfra ==5) cout << "pięt";
    else if (cyfra ==6) cout << "szes";
    else if (cyfra ==7) cout << "siedem";
    else if (cyfra ==8) cout << "osiem";
    else if (cyfra ==9) cout << "dziewięt";

}

void jednosci (int cyfra){

    if(cyfra == 1) cout << "jeden ";
    else if (cyfra == 2) cout << "dwa ";
    else if (cyfra ==3) cout << "trzy ";
    else if (cyfra ==4) cout << "cztery ";
    else if (cyfra ==5) cout << "pięć ";
    else if (cyfra ==6) cout << "sześć ";
    else if (cyfra ==7) cout << "siedem ";
    else if (cyfra ==8) cout << "osiem ";
    else if (cyfra ==9) cout << "dziewięt ";

}


int main(){

    int a;
    cout << "Podaj lliczbe ";
    cin >> a;
    int pomoc1, pomoc2, i=100; 
    string slowo;
    if(a<1000){
    if (a < 0) {slowo = "minus "; a=a*(-1);}
    
        pomoc1 = a/i;
        pomoc2 = a%i;
        i=i/10;
        a=pomoc2;
        if(pomoc1>0){
           setki (pomoc1);     
        }
        pomoc1=a/i;
        pomoc2=a%i;
        a=pomoc2;
        i=i/10;
        if(pomoc1>1){
            dziesiatki (pomoc1);
            jednosci (a);
        } else if (pomoc1==1) { liczby1 (pomoc1); cout<<"naście ";}


    }
    else cout<<"za duża liczba";

    return 0;
}