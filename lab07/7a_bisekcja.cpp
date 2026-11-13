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
    if((pomoc1*pomoc2)<=0) return 0;
    else if ((pomoc1*pomoc2)>0) return 1;

}

//double bisekcja (double a, double b, double wsp[], int n){


//}

int main(){

    double wsp[MAX_N];

    double a, b, n, ws;

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

    if(czy_msc_zerowe(a, b, wsp, n)){


        cout << "kjhfdhjufh";








    }

    return 0;
}