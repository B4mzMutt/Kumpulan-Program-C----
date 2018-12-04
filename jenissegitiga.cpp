#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
int main()
{
    int kode,AB,BC,CA,SS,SK,Keliling;
    char mad;
    do
    {
        cout<<"...........SELAMAT DATANG DI PROGRAM............."<<endl;
        cout<<"MENENTUKAN JENIS SEGITIGA BERDASARKAN KETIGA SISI"<<endl;
        cout<<"================================================="<<endl;
        cout<<""<<endl;
        cout<<"masukan sisi-sisinya : "<<endl;
        float AB,BC,CA;
        cout<<"AB : ";
        cin>>(AB);
        cout<<"BC : ";
        cin>>(BC);
        cout<<"CA : ";
        cin>>(CA);
        cout<<"TERGOLONG JENIS SEGITIGA APAKAH? : ";

        SS=((AB==BC)&&(BC==CA)&&(CA==AB));
        SK=((AB==BC)&&(BC!=CA)&&(CA!=AB));

        Keliling=AB+BC+CA;
        cin>>kode;
        switch(kode){
    case 1:
        if(SS){
        cout<<'\n'<<"Segitiga Sama Sisi"<<endl;
        }
        else if(SK){
        cout<<'\n'<<"Segitiga Sama Kaki"<<endl;
        }
        else
        {
        cout<<'\n'<<"Segitiga Sembarang"<<endl;
        }
        cout<<"kelilingnya adalah : "<<endl;
        cout<<Keliling<<endl;
        break;

        cin>>mad;
        }
        }
        while(mad/='Y');
        cout<<"Terimakasih Telah menyimak"<<endl;
        getch();
        return 0;
    }
