#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()


{
    int kode,harga,jumlah,total,bayar,diskon,kembali,biaya;
    char mad;
    do
    { cout<<"......Toko Electronics Bamzmutt........"<<endl;
      cout<<"Perum GBP 1&2, Telajung, Cikarang Barat"<<endl;
      cout<<"======================================="<<endl;
      cout<<""<<endl;
      cout<<"Daftar Barang                     Harga"<<endl;
      cout<<"1.TV LED 21               Rp. 1.200.000"<<endl;
      cout<<"2.TV LED 32               Rp. 2.300.000"<<endl;
      cout<<"3.Home Theatre            Rp. 1.500.000"<<endl;
      cout<<"4.DVD Player              Rp.   500.000"<<endl;
      cout<<'\n'<<"Pilih Barang yang dibeli = ";
      cin>>kode;
      switch(kode){
 case 1:
    cout<<'\n'<<"Tv LED 21"<<endl;
    harga = 1200000;
    cout<<"Jumlah yang dibeli=";
    cin>>jumlah;
    break;
 case 2:
    cout<<'\n'<<"TV LED 32"<<endl;
    harga = 2300000;
    cout<<"jumlah yang dibeli=";
    cin>>jumlah;
    break;
 case 3:
    cout<<'\n'<<"Home Theatre"<<endl;
    harga = 1500000;
    cout<<"jumlah yang dibeli=";
    cin>>jumlah;
    break;
 case 4:
    cout<<'\n'<<"DVD Player"<<endl;
    harga = 500000;
    cout<<"jumlah yang dibeli=";
    cin>>jumlah;
    break;
    }
        biaya=harga*jumlah;
        diskon=biaya*0.1;
        total=biaya-diskon;


    cout<<"_______________________________"<<endl;
    cout<<"___Toko Electronics Bamzmutt___"<<endl;
    cout<<"_______________________________"<<endl;

    cout<<"Rincian Pembayaran :"<<endl;
    cout<<"Barang yang dibeli ="<<kode<<endl;
    cout<<"Jumlah             ="<<jumlah<<endl;
    cout<<"                    ____________ x"<<endl;
    cout<<"Biaya              = "<<biaya<<endl;
    cout<<"Diskon 10%         = "<<diskon<<endl;
    cout<<"                    ____________ -"<<endl;
    cout<<"GrandTotal         = "<<total<<endl;
    cout<<"Bayar              = ";cin>>bayar;
    kembali=bayar-total;
    cout<<"                    ____________ "<<endl;
    cout<<"Uang Kembalian     = "<<kembali<<endl;
    cin>>mad;

    }

    while(mad/='Y');
    cout<<"Terima kasih Atas Kunjungan Anda di Toko B4mzmutt";
    getch();
    return 0;
}
