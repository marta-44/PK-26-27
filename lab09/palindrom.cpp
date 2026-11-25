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

    return 0;
}