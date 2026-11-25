#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

long long najw_palindrom(long long wart_int){
    
    int czypal=0;
    long long odwrotnosc=wart_int%10, pom=0, i=10;
    while(czypal==0){
        pom=wart_int/10;
        odwrotnosc= wart_int%10;
        while(pom>0){
            odwrotnosc = (odwrotnosc*i) + pom%10;
            pom=pom/10;
            i=i*10;
        }
        if(odwrotnosc == wart_int) {czypal++; }
        return wart_int;
        wart_int--;
        odwrotnosc = 0;
        i=10;
    }
    return 0;


}

int main(){

    cout << endl <<"signed short int (rozmiar " <<  sizeof(signed short int) << "B) ";
    int int_bajty=sizeof(signed short int);
    int int_bity=int_bajty*8;
    long long wart_int= (pow(2, int_bity) - 1)/2;
    cout << wart_int << endl <<numeric_limits<signed short int>::max() << endl;
    long long plaindrom_usi = najw_palindrom(wart_int);
    cout <<" maksymalny palindrom: " << plaindrom_usi <<endl;
    return 0;
}