#include <iostream>

using namespace std;

int main() {

    float P, R;
    int T;

    float I;
    

    cout<<"P = ";
    cin>>P;

    cout<<endl<<"T = ";
    cin>>T;

    cout<<endl<<"R = ";
    cin>>R;

    cout<<fixed<<setprecision(2);

    I=(P*T*R)/100;

    cout<<"wynik rzeczywisty: "<<I<<endl;

    cout<<"wynik calkowity: "<<static_cast<int>(I)

    return 0;
}