//Napisz program, który pobiera liczbę całkowitą, a następnie implementuje funkcję o sygnaturze
//int fib(int liczba)
//, która wykorzystuje pętlę ‘do-while’ i oblicza pierwszą wartość w ciągu Fibonacciego, większą od podanej.
//Wskazówki:
///Ciąg Fibonacci’ego skonstruowany jest w następujący sposób: a0 = 0, a1 = 1, an = an-1 + an-2 dla n > 1.
#include <iostream>

using namespace std;

int fib (int liczba){
    int f=0, f0=0, f1=1;
    
        do{

            f = f0 + f1;

            f0=f1;
            f1=f;
       
        }while(f<=liczba);
       return f;
    
    
}

int main(){

    int liczba;
    cout << "Podaj wartość: ";
    cin >> liczba;
    
    cout << endl << "Następny wyraz ciągu to " << fib(liczba);

    return 0;
}