//Napisz program, który alokuje tablicę dwuwymiarową dynamiczną A i wypełnia ją kolejnymi liczbami, a następnie tworzy tablicę B, która jest transponowaną tablicą A. Następnie program wypisuje obydwie tablice. Program pobiera dwie liczby N i M, które określają rozmiar NxM tablicy A. Każda liczba (komórka tabeli) wydrukowywana jest na polu o długości 6 miejsc.
//Wskazówka:
//Napisz funkcje do alokowania pamięci i wypisywania tablicy.
//Wyjście:
//N: 3
//M: 4
//A: 
//     1     2     3     4
//     5     6     7     8
//     9    10    11    12
//B:
//     1     5     9
//     2     6    10
//     3     7    11
//     4     8    12
#include <iostream>

using namespace std;

int main(){

    int w, k;
    cout << "N: ";
    cin >> w;
    cout << endl << "M: ";
    cin >> k;
    cout << endl << "A: " << endl;
    int tab[w][k];
    int licz=1;
    for(int i=0; i<w; i++){
        for (int j=0; j<k; j++){
            tab[i][j] = licz;
            licz++;
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << "B: " << endl;
    int tabb[k][w];
    for(int i=0; i<k; i++){
        for (int j=0; j<w; j++){
            tabb[i][j] = tab[j][i];
            cout << tabb[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}