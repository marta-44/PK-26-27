//Napisz program, który wykorzystując możliwości konstruowania funkcji, 
//wczytuje ziarno generatora liczb losowych a następnie wypełnia tablicę liczb całkowitych liczbami 
//losowymi z zakresu od 1 do podanego zakresu włącznie. Ziarno ustawiane jest funkcją srand(), 
//a liczby losowane są przy pomocy rand() % zakres + 1.
#include <iostream>
#include <cstdlib>h

using namespace std;

void tablica ( int* tab, int n, int zakres){
        cout << endl << "[ ";
        int p=0;
        //int koniec = *tab + *n;
        while (p < n){

        *(tab + p) = rand() % zakres + 1;
        cout << tab[p] << ", ";
        p++;
    }
    cout << " ]";

}

void maksimum (int *tab, int n){

    int maks = tab[0];

    for (int i=1; i<n; i++){
        if(maks < tab[i]) maks=tab[i];
    }
    cout << endl << "Maksimum: " << maks;

}

void minimum (int *tab, int n){

    int mini = tab[0];

    for (int i=1; i<n; i++){
        if(mini > tab[i]) mini=tab[i];
    }
    cout << endl << "Minimum: " << mini;

}

void suma (int *tab, int n){

    double suma=0;

    for (int i=0; i<n; i++){
        suma = suma + tab[i];
    }
    cout << endl << "Suma: " << suma;

}

void liczby_pierwsze (int *tab, int n){
    int czy=0;
    int pomoc;
    cout << endl << "Liczby pierwsze: ";
    for(int i=0; i<n; i++){
        czy=0;
        pomoc=tab[i];
        for(int j=2; j<pomoc; j++){
            if(pomoc%j==0) czy++;
            
        }
        if(czy==0) cout << tab[i] << ", ";

    }


}

void kwadraty_liczb(int *kwadraty, int *tab, int n, int pom){

    for(int i=0; i<n; i++){

        for(int j=0; j<pom; j++){
            
        }
    }


}

int main(){

    int ziarno, zakres;
    int n;
    cout << "Ziarno: ";
    cin >> ziarno;
    cout << endl << "N: ";
    cin >> n;
    cout << endl << "Zakres: ";
    cin >> zakres;

    srand(ziarno);
    
    int* tab = new int [n];

    tablica (tab, n, zakres);

    maksimum (tab, n);

    minimum (tab, n);

    suma(tab, n);

    liczby_pierwsze (tab, n);

    pom=zakres/2;
    int kwadraty[pom];

    for(int i=0; i<pom; i++){
        kwadraty[i]=i*i;

    }

    kwadraty_liczb(kwadraty, tab, n, pom);


    delete[] kwadraty;
    delete[] tab;
    return 0;
}
