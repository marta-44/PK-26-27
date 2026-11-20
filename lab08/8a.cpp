//Napisz program, który utworzy tablicę jednowymiarową o rozmiarze 'n' i wypełni ją liczbami pseudolosowymi 
//z zakresu [0, 100) (operator modulo). Program wczyta ziarno do ustawienia generatora liczby losowej.
//Następnie program wypisze całą tablicę, a następnie sąsiadujące ze sobą pary liczb.  
//W programie nie można korzystać z operatora indeksowania [ ] i pętli for. 
//Program wypisuje liczby na 6 miejscach.
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

void tablica ( int* tab, int n){
        int p=0;
        //int koniec = *tab + *n;
        while (p < n){

        *(tab + p) = rand() % 100;

        p++;
    }

}

int main(){

    int ziarno;
    cout << "Ziarno: ";
    cin >> ziarno;

    int n;
    cout << endl << "N: ";
    cin >> n;

    srand(ziarno);
    
    int* tab = new int [n];

    int *p = tab;

    tablica (tab, n);



    int i=0;
    while( i<n){
    
    cout << endl << *tab+i;  
    
    i++;
    }

    i=0;

    while(i<n-1){
        cout << endl << setw(6) << *tab+i << " " << setw(6) << *tab+i+1;
        i++;
    }



    return 0;
}