//Implementasi fungsi
//Bambang Wijonarko
//311810581
//TI.18.E.1
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


using namespace std;

int main()
{
    float angka, total = 0,rata;
    int jumlah;
    cout<<"1. Mencari Rata-rata.(jumlah angka ditentukan)"<<endl;
    cout<<endl;
    cout<<" Masukan jumlah angka    :";
    cin>>jumlah;
    cout<<endl;

    for (int i=1;i<=jumlah;i++){
        cout<<"Masukan angka        :";
        cin>>angka;
        total=total+angka;
    }
    cout<<endl;
    cout<<"Total                    :"<<total<<endl;
    cout<<total/jumlah;
    cout<<"Rata-rata                :"<<rata;
    getch();
    return 0;
}
