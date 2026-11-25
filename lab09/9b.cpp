//signed short int
//unsigned short int
//signed int
//unsigned int
//signed long int
//unsigned long int
//signed long long int
//unsigned long long int
#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

unsigned long long szukaj_palindrom(unsigned long long a){

    unsigned long long pom1=a, pom=a, odwrotnosc=0, pomocy=0;

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

    cout << endl <<"signed short int (rozmiar " <<  sizeof(signed short int) << "B) ";
    int int_bajty=sizeof(signed short int);
    int int_bity=int_bajty*8;
    unsigned long long wart_int= (pow(2, int_bity) - 1)/2;
   // cout << wart_int << endl <<numeric_limits<signed short int>::max() << endl;
    unsigned long long plaindrom_usi = szukaj_palindrom(wart_int);
    cout <<" maksymalny palindrom: " << plaindrom_usi <<endl;

    cout << "unsigned short int (rozmiar " << sizeof(unsigned short int) <<"B) ";
    unsigned long long limit_usi2 = numeric_limits<unsigned short int>::max();
    unsigned long long palindrom_usi2 = szukaj_palindrom(limit_usi2);
    cout <<" maksymalny palindrom: " << palindrom_usi2 <<endl;

    cout << "signed int (rozmiar " << sizeof(signed int) <<"B) ";
    unsigned long long limit_si = (numeric_limits<signed int>::max());
    unsigned long long palindrom_si = szukaj_palindrom(limit_si);
    cout <<" maksymalny palindrom: " << palindrom_si <<endl;

    cout << "unsigned int (rozmiar " << sizeof(unsigned int) <<"B) ";
    unsigned long long limit_ui = numeric_limits<unsigned int>::max();
    unsigned long long palindrom_ui = szukaj_palindrom(limit_ui);
    cout <<" maksymalny palindrom: " << palindrom_ui <<endl;

    cout << "signed long int(rozmiar " << sizeof(signed long int) <<"B) ";
    unsigned long long limit_sli = numeric_limits<signed long int>::max();
    unsigned long long palindrom_sli = szukaj_palindrom(limit_sli);
    cout <<" maksymalny palindrom: " << palindrom_sli <<endl;

    cout << "unsigned long int(rozmiar " << sizeof(unsigned long int) <<"B) ";
    unsigned long long limit_uli = numeric_limits<unsigned long int>::max();
    unsigned long long palindrom_uli = szukaj_palindrom(limit_uli);
    cout <<" maksymalny palindrom: " << palindrom_uli <<endl;

    cout << "signed long long int(rozmiar " << sizeof(signed long long int) <<"B) ";
    unsigned long long limit_slli = numeric_limits<signed long long int>::max();
    unsigned long long palindrom_slli = szukaj_palindrom(limit_slli);
    cout <<" maksymalny palindrom: " << palindrom_slli <<endl;

    cout << "unsigned long long int(rozmiar " << sizeof(unsigned long long int) <<"B) ";
    unsigned long long limit_ulli = numeric_limits<unsigned long long int>::max();
    unsigned long long palindrom_ulli = szukaj_palindrom(limit_ulli);
    cout <<" maksymalny palindrom: " << palindrom_ulli <<endl;

    return 0;
}