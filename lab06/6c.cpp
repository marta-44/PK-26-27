//Napisz program, który implementuje prosty kalkulator. Program wczytuje działanie, a następnie w zależności od działania wywołuje 
//jedną z poniższych funkcji do obliczenia wartości wyrażenia:
//float dodaj(float, float)
//float odejmij(float, float)
//float pomnoz(float, float)
//float podziel(float, float)
//Działanie ma postać 'a operator b' gdzie jako operator może być jeden ze znaków: + - / *
#include <iostream>

using namespace std;

float dodaj (int a, int b){
    float wynik= a+b;
    return wynik;    
}

float odejmij (int a, int b){
    float wynik= a-b;
    return wynik;    
}

float pomnoz (int a, int b){
    float wynik= a*b;
    return wynik;    
}

float podziel (int a, int b){
    float wynik= a/b;
    return wynik;    
}




int main(){

    int a, b;
    char operato;

    cout << "Działanie: ";
    cin >> a >> operato >> b;
    
    if (operato == '+') cout<<"Wynik: "<<dodaj(a, b);
    else if (operato == '-') cout<<"Wynik: "<<odejmij(a, b);
    else if (operato == '*') cout<<"Wynik: "<<pomnoz(a, b);
    else if (operato == '/') cout<<"Wynik: "<<podziel(a, b);
    else cout << "Nieprawidłowe działanie";

    return 0;
}