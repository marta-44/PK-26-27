//Napisz program, który alokuje tablicę dwuwymiarową o wymiarze N na M po czym wypełnia ją liczbami od 1 do n*m a następnie wypisuje tablice na ekran. Wypełnianie tablicy następuje wg spirali, czyli w kolejności: w prawo, w dół, w lewo, w górę. Każda liczba (komórka tabeli) wydrukowywana jest na polu o długości 6 miejsc.
//Wyjście:
//N: 4
//M: 4
//     1     2     3     4
//    12    13    14     5
//    11    16    15     6
//    10     9     8     7
#include <iostream>

using namespace std;

// zauważ jak poruszamy sie po tablicy:
// top = 0;
// bottom = N - 1;
// lewo = 0;
// prawot = M - 1;

// warunkiem stopu może być wartość wpisywana do tablicy, bo mamy wpisywać od 1... do zapełnienia wszystkich komórek
// czyli wartość maksymalna to M * N

// stwórz pętlę główną z warunkiem stopu, np while
// w while stwórz cztery osobne fory do poruszania się top, prawo, bottom, lewo
// po wyjsciu z forów odpowiednio inkrementuj lub dekrementuj tom/bottom/prawo/lewo

int main(){

    int n, m;
    cout << "N: ";
    cin >> n; //wiersze
    cout << endl << "M: ";
    cin >> m; //kolumny
    int tab[n][m]; int p1=n, p2=m;
    int licz = 1, maks = n*m, indexw=0, indexk=1, w=0, k=0;
    while(licz < maks){
        //prawo
        for (int i=indexw; i<m; i++){
            tab[w][i] = licz;
            licz++;
        }
        w++;
        //dół
        for(int j=indexk; j < n; j++){
            tab[j][m]=licz;
            licz++;
        }
        m--; indexk++;
        //lewo
        for(int l=m; l>=indexw; l--){
            tab[n][l]=licz;
            licz++;
        }
        indexw++; n--;
        //góra
        for(int o=m; o>=indexk; o--){
            tab[o][k]=licz;
            licz++;
        }
        k++;


    }

    for (int i=0; i<p1; i++){
        for (int j=0; j<p2; j++){
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}