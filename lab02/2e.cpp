//0.0 ... 4.4 – ocena niedostateczny (2.0),
//4.5 ... 5.2 – ocena dostateczny (3.0),
//5.3 ... 6.2 – ocena ponad dostateczny (3.5),
//6.3 ... 7.2 – ocena dobry (4.0),
//7.3 ... 8.2 – ocena ponad dobry (4.5),
//8.3 ... 9.0 – ocena bardzo dobry (5.0).

#include <iostream>
#include <iomanip>

using namespace std;

int main (){

    float ocena;

    cout << fixed << setprecision(1);

    cout << "Punkty: ";
    cin >> ocena;

    if (ocena >= 0){
        if(ocena <= 4.4) cout << endl << "Uzyskana ocena to niedostateczny (2.0)";
            else if (ocena <=5.2) cout << endl << "Uzyskana ocena to dostateczny (3.0)";
            else if(ocena <=6.2) cout << endl << "Uzyskana ocena to ponad dostateczny (3.5)";
            else if (ocena <= 7.2) cout << endl << "Uzyskana ocena to dobry (4.0)";
            else if (ocena <= 8.2) cout << endl << "Uzyskana ocena to ponad dobry (4.5)";
            else if (ocena <=9.0) cout << endl << "Uzyskana ocena to bardzo dobry (5.0)";
        }
        else cout << endl << "Nieprawidłowa liczba punktów!";
    


    return 0;
}