//Napisz program, który otworzy plik, którego ścieżka podana jest jako argument 
//wywołania programu po czym, wyszuka w nim linie zawierające teksty ‘wzorzec’ 
//podane jako kolejne argumenty. 
//lokomotywa.txt wagon buch
#include <iostream>
#include <fstream>

using namespace std;

bool czy_zawiera(string linia, string wzorzec){

    if(linia.find(wzorzec) != string::npos){
        return true;
    }
    else return false;


}

int main(){


    ifstream lokomotywa ("lab09/lokomotywa.txt");

    string linia;
     string wzorzec1 = "wagon\0";
     //char wzorzec2 = "buch\0";

    cout << " Linie zawierające słowo \"" ;
    cin >> wzorzec1;
    cout << "\":";
    while(!lokomotywa.eof()){
    getline(lokomotywa, linia);
    if(czy_zawiera(linia, wzorzec1))
    cout << linia << endl;

    }

    
    return 0;
}