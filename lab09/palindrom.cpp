#include <iostream>

using namespace std;

int szukaj_palindrom(int a){

    int pom1=a, pom=a, odwrotnosc=0, pomocy=0;

    while (pom1>0){

        odwrotnosc=0;
        pom=pom1;
        while(pom>0){
            pomocy = pom%10;
            odwrotnosc = (odwrotnosc*10) + pomocy;
            pom=pom/10;

        }
        if(odwrotnosc == pom1) return pom1;
        pom1--;
    }
    return 0;
}




int main(){

    int liczba;
    cout << "Liczba: ";
    cin >> liczba;

    int palindrom=szukaj_palindrom(liczba);
    cout << endl << "Palindrom najblizej w dół: " << palindrom << endl;

    unsigned long long a=liczba;

    unsigned long long pom=a, pomocy=1, i=0;

    while(a>0 && pomocy != 0){
        pom=a; pomocy=0; i=0;
        //cout << endl << a << endl;
        while(pom>0){
            pom=pom/10; //cout << i << " ";
            i++;
        }
        i--;
        int tab[i];
        pom=a; //cout << endl << i << endl;
        for (int j=0; j<i+1; j++){
            tab[j]=pom%10; //cout << tab[j] << " ";
            pom=pom/10;
        }
        //cout << endl;
        for(int k=0; k<((i+1)/2); k++){
            if(tab[k] != tab[i-k]) pomocy++;
           // cout << tab[k] << " : " << tab[i-k] << endl;
        }
        if(pomocy==0){
            cout << endl << a << endl;

            break;
        }

        a--;

    }
    


    return 0;
}