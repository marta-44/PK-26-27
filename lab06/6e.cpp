//Napisz program, który pobiera liczbę całkowitą N, która określa pozycję liczby w ciągu Fibonacciego. 
//Program oblicza wartość w ciągu Fibonacciego wykorzystując rekurencję. 
//Ciąg numerowany jest od 0, a pierwsze wyrazy wyglądają następująco: 0 1 1 2 3 5.
//Wyjście:
//N: 7
//fib(7) = 13
#include <iostream> 

using namespace std;

int fib(int n){
    int f;
    if (n==0) f = 0;
    else if(n==1) f = 1;
    else f = fib(n-1) + fib(n-2);
    return f;

}

int main(){

    int n;
    cout << "N: ";
    cin >> n;
    cout << "fib(" << n << ") = " << fib(n);

    return 0;
}