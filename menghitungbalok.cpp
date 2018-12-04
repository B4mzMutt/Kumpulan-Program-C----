#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int p,l,t,kel,luas,vol;
    //membersihkan layar
    cout << "Bambang Wijonarko 311810581" << endl;
    cout << "Menghitung Luas , Keliling , volume balok" << endl;
    cout << "masukan panjang:";
    cin >> p;

    cout << "masukan lebar:";
    cin >> l;

    cout << "masukan tinggi:";
    cin >> t;

    kel = 2*(p + l);
    luas = p * l;

    if (t > 0){

      vol = p * l * t;

      cout << "maka volume Balok adalah = " << vol << endl;
    }
    cout << "maka keliling Balok adalah = " << kel << endl;
    cout << "maka luas Balok adalah = " << luas << endl;

       getch();
       return(0);

   }
