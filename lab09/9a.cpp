#include <iostream>

using namespace std;

const char* jednosci(int a){

    if(a == 1) return " jeden";
    if(a==2) return " dwa";
    if(a == 3)return " trzy";
    if(a == 4)return " cztery";
    if(a == 5)return " pięć";
    if(a == 6)return " sześć";
    if(a == 7)return " siedem";
    if(a == 8)return " osiem";
    if(a == 9)return " dziewięć";
    else return "";
}

const char* dziesiatki(int a){

    if(a == 2) return " dwadzieścia";
    if(a ==3) return " trzydzieści";
    if(a == 4) return " czterdieści";
    if(a == 5) return " pięćdziesiąt";
    if(a == 6) return " sześćdziesiąt";
    if(a == 7) return " siedemdiesiąt";
    if(a == 8) return " osiemdziesiąt";
    if(a == 9) return " dziewięćdziesiąt";
    else return "";


}

const char* setki(int a){

    if(a == 1) return "sto";
    if(a == 2) return "dwieście";
    if(a == 3) return "trzysta";
    if(a == 4) return "czterysta";
    if(a == 5) return "pięćset";
    if(a == 6) return "sześćset";
    if(a == 7) return "siedemset";
    if(a == 8) return "osiemset";
    if(a == 9) return "dziewięćset";
    else return "";

}

const char* nascie (int a){

    if(a == 1) return " jedenaście";
    if(a == 2) return " dwanaście";
    if(a == 3) return " trzynaście";
    if(a == 4) return " czternaście";
    if(a == 5) return " piętnaście";
    if(a == 6) return " szesnaście";
    if(a == 7) return " siedemnaście";
    if(a == 8) return " osiemnaście";
    if(a == 9) return " dziewiętnaście";
    else return "";

}


int main(){

    int liczba, pom;
    cout << "Liczba: ";
    cin>>liczba;
    
    if(liczba<0){cout<<" minus "; liczba=liczba*(-1);}
    int j, s,d;
    pom=liczba;
    j=liczba%10;
    liczba=liczba/10;
    d= liczba%10;
    liczba=liczba/10;
    s=liczba%10;

    const char *jedn, *dzies, *set, *nast;
    
    set = setki(s);

    if(d!=1){
    jedn = jednosci(j);
    dzies = dziesiatki(d);
    cout << set << dzies << jedn;
    }

    else if(d==1){
        nast = nascie(j);
        cout << set << nast;
    }

    return 0;
}