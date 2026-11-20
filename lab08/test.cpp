#include <iostream>

using namespace std;

void test (int *x, int *y, int *z){
    *x=9;
    *y=8;
    *z=7;
}

int main(){


    int x=1, y=2, z=3;
    test (&x, &y, &z);
    cout << endl << x << endl << y << endl << z;


    return 0;
}