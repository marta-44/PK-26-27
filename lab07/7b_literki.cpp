//Napisz program, który wczyta linię tekstu ze standardowego wejścia a następnie wypiszę ją zmieniając wielkość liter:
//Tekst: Ala ma kota i psa
//Konwersja:
//1. małe
//2. WIELKIE
//3. Tytułowe
//Wybór: 1
//ala ma kota i psa

#include <iostream>

using namespace std;

// Napisz FUNKCJE, które odpowiednio zamieniają tekst
// Masz przykład w funkjci main, przenieś go do odpowiedniej własnej funkcji, dopisz resztę kodu

int main()
{
    const int MAX_SIZE = 1000;
    int wybor=0;
    char tekst[MAX_SIZE];
    cout << "Tekst: ";
    cin.getline(tekst, MAX_SIZE);
    cout << endl << "Konwersja: " << "1. małe" << endl << "2. WIELKIE" << endl << "3. Tytułowe" << endl << "Wybór: ";
    cin >> wybor;

    //char p='a';
    //cout<<endl << p << " " << char(p-32) << endl;

if (wybor == 3){

    for (int i = 0; tekst[i] != '\0';i++ ) {
        unsigned char c = (unsigned char)tekst[i];

        // zamiana na małe
        if (c < 128 ) {
            // ASCII
            if(c>=65 && c<=90){
            tekst[i]= tolower(tekst[i]);}
            
        }
        else {
            // gdyby interesujowało nas tylko: ł (C5 82) Ł (C5 81) - dopisać resztę znaków polskich...
            /// uwaga! kodowanie 2-bajtowe!
            if ((unsigned char)tekst[i] == 0xC5 && (unsigned char)tekst[i + 1] == 0x81) {
                // tu odpowiednio podmień na kod literki, którą chcemy uzyskać
                tekst[i+1] = 0x82;}
                if ((unsigned char)tekst[i] == 0xC4 && (unsigned char)tekst[i + 1] == 0x84) {
                    tekst[i+1] = 0x85;}
                if ((unsigned char)tekst[i] == 0xC4 && (unsigned char)tekst[i + 1] == 0x86) {
                    tekst[i+1] = 0x87;}
                if ((unsigned char)tekst[i] == 0xC4 && (unsigned char)tekst[i + 1] == 0x98) {
                    tekst[i+1] = 0x99;}
                if ((unsigned char)tekst[i] == 0xC5 && (unsigned char)tekst[i + 1] == 0x83) {
                    tekst[i+1] = 0x84;}
                if ((unsigned char)tekst[i] == 0xC3 && (unsigned char)tekst[i + 1] == 0x93) {
                    tekst[i+1] = 0xB3;}
                if ((unsigned char)tekst[i] == 0xC5 && (unsigned char)tekst[i + 1] == 0x9A) {
                    tekst[i+1] = 0x9B;}
                if ((unsigned char)tekst[i] == 0xC5 && (unsigned char)tekst[i + 1] == 0xB9) {
                    tekst[i+1] = 0xBA;}
                if ((unsigned char)tekst[i] == 0xC5 && (unsigned char)tekst[i + 1] == 0xBB) {
                    tekst[i+1] = 0xBC;}

            }

        // czy tytułowe: 
        if(i==0 || tekst[i-1]==32){ //cout<<"JONGADONGA ";
            // zamiana na duze
             if (c < 128 ) {
            // ASCII
            if(c>=97 && c<=122){
            tekst[i]= toupper(tekst[i]);}
            
        }
        else {
            // gdyby interesujowało nas tylko: ł (C5 82) Ł (C5 81) - dopisać resztę znaków polskich...
            /// uwaga! kodowanie 2-bajtowe!
            if ((unsigned char)tekst[i] == 0xC5 && (unsigned char)tekst[i + 1] == 0x82) {
                // tu odpowiednio podmień na kod literki, którą chcemy uzyskać
                tekst[i+1] = 0x81;}
                if ((unsigned char)tekst[i] == 0xC4 && (unsigned char)tekst[i + 1] == 0x85) {
                    tekst[i+1] = 0x84;}
                if ((unsigned char)tekst[i] == 0xC4 && (unsigned char)tekst[i + 1] == 0x87) {
                    tekst[i+1] = 0x86;}
                if ((unsigned char)tekst[i] == 0xC4 && (unsigned char)tekst[i + 1] == 0x99) {
                    tekst[i+1] = 0x98;}
                if ((unsigned char)tekst[i] == 0xC5 && (unsigned char)tekst[i + 1] == 0x84) {
                    tekst[i+1] = 0x83;}
                if ((unsigned char)tekst[i] == 0xC3 && (unsigned char)tekst[i + 1] == 0xB3) {
                    tekst[i+1] = 0x93;}
                if ((unsigned char)tekst[i] == 0xC5 && (unsigned char)tekst[i + 1] == 0x9B) {
                    tekst[i+1] = 0x9A;}
                if ((unsigned char)tekst[i] == 0xC5 && (unsigned char)tekst[i + 1] == 0xBA) {
                    tekst[i+1] = 0xB9;}
                if ((unsigned char)tekst[i] == 0xC5 && (unsigned char)tekst[i + 1] == 0xBC) {
                    tekst[i+1] = 0xBB;}

            }
        }



}}


if(wybor == 2)
{
    for (int i = 0; tekst[i] != '\0';i++ ) {
        unsigned char c = (unsigned char)tekst[i];
        
        if (c < 128 ) {
            // ASCII
            if(c>=97 && c<=122){
            tekst[i]= toupper(tekst[i]);}
            
        }
        else {
            // gdyby interesujowało nas tylko: ł (C5 82) Ł (C5 81) - dopisać resztę znaków polskich...
            /// uwaga! kodowanie 2-bajtowe!
            if ((unsigned char)tekst[i] == 0xC5 && (unsigned char)tekst[i + 1] == 0x82) {
                // tu odpowiednio podmień na kod literki, którą chcemy uzyskać
                tekst[i+1] = 0x81;}
                if ((unsigned char)tekst[i] == 0xC4 && (unsigned char)tekst[i + 1] == 0x85) {
                    tekst[i+1] = 0x84;}
                if ((unsigned char)tekst[i] == 0xC4 && (unsigned char)tekst[i + 1] == 0x87) {
                    tekst[i+1] = 0x86;}
                if ((unsigned char)tekst[i] == 0xC4 && (unsigned char)tekst[i + 1] == 0x99) {
                    tekst[i+1] = 0x98;}
                if ((unsigned char)tekst[i] == 0xC5 && (unsigned char)tekst[i + 1] == 0x84) {
                    tekst[i+1] = 0x83;}
                if ((unsigned char)tekst[i] == 0xC3 && (unsigned char)tekst[i + 1] == 0xB3) {
                    tekst[i+1] = 0x93;}
                if ((unsigned char)tekst[i] == 0xC5 && (unsigned char)tekst[i + 1] == 0x9B) {
                    tekst[i+1] = 0x9A;}
                if ((unsigned char)tekst[i] == 0xC5 && (unsigned char)tekst[i + 1] == 0xBA) {
                    tekst[i+1] = 0xB9;}
                if ((unsigned char)tekst[i] == 0xC5 && (unsigned char)tekst[i + 1] == 0xBC) {
                    tekst[i+1] = 0xBB;}

            }
        }
        
}


if(wybor == 1)
{
    for (int i = 0; tekst[i] != '\0';i++ ) {
        unsigned char c = (unsigned char)tekst[i];

        if (c < 128 ) {
            // ASCII
            if(c>=65 && c<=90){
            tekst[i]= tolower(tekst[i]);}
            
        }
        else {
            // gdyby interesujowało nas tylko: ł (C5 82) Ł (C5 81) - dopisać resztę znaków polskich...
            /// uwaga! kodowanie 2-bajtowe!
            if ((unsigned char)tekst[i] == 0xC5 && (unsigned char)tekst[i + 1] == 0x81) {
                // tu odpowiednio podmień na kod literki, którą chcemy uzyskać
                tekst[i+1] = 0x82;}
                if ((unsigned char)tekst[i] == 0xC4 && (unsigned char)tekst[i + 1] == 0x84) {
                    tekst[i+1] = 0x85;}
                if ((unsigned char)tekst[i] == 0xC4 && (unsigned char)tekst[i + 1] == 0x86) {
                    tekst[i+1] = 0x87;}
                if ((unsigned char)tekst[i] == 0xC4 && (unsigned char)tekst[i + 1] == 0x98) {
                    tekst[i+1] = 0x99;}
                if ((unsigned char)tekst[i] == 0xC5 && (unsigned char)tekst[i + 1] == 0x83) {
                    tekst[i+1] = 0x84;}
                if ((unsigned char)tekst[i] == 0xC3 && (unsigned char)tekst[i + 1] == 0x93) {
                    tekst[i+1] = 0xB3;}
                if ((unsigned char)tekst[i] == 0xC5 && (unsigned char)tekst[i + 1] == 0x9A) {
                    tekst[i+1] = 0x9B;}
                if ((unsigned char)tekst[i] == 0xC5 && (unsigned char)tekst[i + 1] == 0xB9) {
                    tekst[i+1] = 0xBA;}
                if ((unsigned char)tekst[i] == 0xC5 && (unsigned char)tekst[i + 1] == 0xBB) {
                    tekst[i+1] = 0xBC;}

            }
        }
        
}

    for (int i = 0; tekst[i] != '\0';i++ ){
            //float b = static_cast<float>(tekst[i]);
            cout << tekst[i];
        } 
    
    return 0;
}