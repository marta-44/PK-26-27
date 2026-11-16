#include <iostream>
#include <cmath>

using namespace std;

const double EPS = 0.001;
const int MAX_N = 100;

double wartosc_wielomianu(double x, double wsp[], int n){
    double wartosc=0, pomoc=0;
    for(int i=0; i<=n; i++){
        pomoc = wsp[i] * pow(x , i);
        wartosc = wartosc + pomoc;
    }
    return wartosc;

}

bool czy_msc_zerowe (double a, double b, double wsp[], int n){

    double pomoc1, pomoc2;
    pomoc1 = wartosc_wielomianu(a, wsp, n);
    pomoc2 = wartosc_wielomianu(b, wsp, n);
    if((pomoc1*pomoc2)<=0) {return 1;}
    else if ((pomoc1*pomoc2)>0) {return 0;}

}

double bisekcja (double a, double b, double wsp[], int n){

    double polowa=(a+b)/2;

    if(fabs(wartosc_wielomianu(polowa, wsp, n))<EPS || fabs((a-b))<EPS) {
        a=polowa;
        return a;
    }
    else if(czy_msc_zerowe(a,polowa, wsp, n)) { return bisekcja(a, polowa, wsp, n);}
    else if(czy_msc_zerowe(polowa, b, wsp, n)) { return bisekcja(polowa, b, wsp, n);}


}

int main(){

    double wsp[MAX_N];

    double a, b, ws;
    int n;
    cout << "a: ";
    cin >> a;
    cout << endl <<"b: ";
    cin >> b;
    cout << "n: ";
    cin >> n;

    for (int i=0; i<=n; i++){
        cout << "x" << i << ": ";
        cin >> wsp[i];
    }
    // double pomoc1, pomoc2;
    // pomoc1 = wartosc_wielomianu(a, wsp, n);
    // pomoc2 = wartosc_wielomianu(b, wsp, n);

    //cout << endl << "wartosc: " << wartosc_wielomianu(2, wsp, n);
    double wynik=0;
    if(czy_msc_zerowe(a, b, wsp, n)){
       wynik = bisekcja(a, b, wsp, n);
    }

    cout << endl << wynik << endl;


    return 0;
}