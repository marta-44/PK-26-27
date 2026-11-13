#include <iostream>
#include <iomanip>

using namespace std;

int main (){

    //const int rozm_tab=5;
    int rozm_tab1, rozm_tab2;
    
    float srednia, suma=0, ocena;
    cout << "ile studentów?: ";
    cin >> rozm_tab1;
    
    cout << endl << "po ile ocen? ";
    cin >> rozm_tab2;
    

    float tab[rozm_tab1][rozm_tab2];

    cout << fixed << setprecision(1);

    for(int j=0; j<rozm_tab1; j++){
        cout << endl << "student " << j+1 << ": ";
        for(int i=0; i<rozm_tab2; i++){
            cout << endl <<"Ocena: ";
            cin >> ocena;
            tab[j][i] = ocena;
            suma = suma + ocena;

        }
        cout << endl << "Średnia studenta " << j+1 << ": " << suma/rozm_tab2;
        suma = 0;
    }
    
    
    return 0;
}