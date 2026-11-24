//Napisz program, który wykorzystując możliwości konstruowania funkcji, 
//wczytuje ziarno generatora liczb losowych a następnie wypełnia tablicę liczb całkowitych liczbami 
//losowymi z zakresu od 1 do podanego zakresu włącznie. Ziarno ustawiane jest funkcją srand(), 
//a liczby losowane są przy pomocy rand() % zakres + 1.
#include <iostream>
#include <cstdlib>

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
    cout << endl << "Kwadraty liczb: ";
    for(int i=0; i<n; i++){
        
        for(int j=0; j<pom; j++){
            if(tab[i]==kwadraty[j]) cout << tab[i] << ", ";
        }
    }


}

void szesciany_liczb(int *szesciany, int *tab, int n, int pom){
    cout << endl << "Sześciany liczb: ";
    for(int i=0; i<n; i++){
        
        for(int j=0; j<pom; j++){
            if(tab[i]==szesciany[j]) cout << tab[i] << ", ";
        }
    }
}

void czy_silnia (int *silnia, int *tab, int n, int pom){
    cout << endl << "Silnie liczb: ";

    for (int i=0; i<n; i++){
        for(int j=0; j<pom; j++){
            if(tab[i]==silnia[j]) cout << tab[i] << ", ";
        }
    }
}



void czy_fib(long long *fibi, int *tab, int n, int zakres){
    cout << endl << "Liczb z ciągu Fibonacciego: ";
    for(int i=0; i<n; i++){
        for(int j=0; j<zakres; j++){
            if(tab[i]==fibi[j]) cout << tab[i] << ", ";
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

    int pom=zakres/2;
    int* kwadraty = new int [pom];
    int i=0;
    while(i*i<zakres){
        kwadraty[i]=i*i;
        i++;
    }

    kwadraty_liczb(kwadraty, tab, n, pom);

    int* szesciany = new int [pom];
    i=0;
    while(i*i*i<zakres){
        szesciany[i]=i*i*i;
        i++;
    }

    szesciany_liczb(szesciany, tab, n, pom);

    //tablica silnii pom
    int* silnia = new int [pom];
    silnia[0]=1;
    i=1;
    while(silnia[i-1]<=zakres){
        silnia[i-1]=1;
        for(int j=1; j<=i; j++){
            silnia[i-1]=silnia[i-1]*j;
        }
        i++;
    }

    czy_silnia (silnia, tab, n, pom);

    // tavela fibbonaci od zakres
    long long *fibi = new long long [zakres];

    fibi[0]=0;
    if(zakres>=1) fibi[1]=1;

    for(int i=2; i<zakres; i++){
        fibi[i]=fibi[i-1]+fibi[i-2];
    }



    czy_fib(fibi, tab, n, zakres);


    delete[] kwadraty;
    delete[] tab;
    return 0;
}
