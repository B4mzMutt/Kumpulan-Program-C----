#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()


{
    int kode,harga,jumlah,bayar,kembali,biaya;
    char mad;
    do
    { cout<<"........Pondok Makan Bamzmutt.........."<<endl;
      cout<<"Perum GBP 1&2, Telajung, Cikarang Barat"<<endl;
      cout<<"======================================="<<endl;
      cout<<""<<endl;
      cout<<"Menu Makanan                             Harga"<<endl;
      cout<<"1.PAKET AYAM + NASI + AIR MINERAL        Rp. 19.000"<<endl;
      cout<<"2.PAKET NASI GORENG + ES TEH MANIS       Rp. 18.000"<<endl;
      cout<<"3.PAKET MIE AYAM PANGSIT + ES JERUK      Rp. 19.000"<<endl;
      cout<<"4.PAKET PECEL AYAM + ES JERUK            Rp. 19.000"<<endl;
      cout<<'\n'<<"Pilih Paket yang dipilih = ";
      cin>>kode;
      switch(kode){
 case 1:
    cout<<'\n'<<"Paket 1"<<endl;
    harga = 19000;
    cout<<"Jumlah yang dibeli= ";
    cin>>jumlah;
    break;
 case 2:
    cout<<'\n'<<"Paket 2"<<endl;
    harga = 18000;
    cout<<"jumlah yang dibeli= ";
    cin>>jumlah;
    break;
 case 3:
    cout<<'\n'<<"Paket 3"<<endl;
    harga = 19000;
    cout<<"jumlah yang dibeli= ";
    cin>>jumlah;
    break;
 case 4:
    cout<<'\n'<<"Paket 4"<<endl;
    harga = 19000;
    cout<<"jumlah yang dibeli= ";
    cin>>jumlah;
    break;
    }
        biaya=harga*jumlah;


    cout<<"_______________________________"<<endl;
    cout<<"_____Pondok Makan Bamzmutt_____"<<endl;
    cout<<"_______________________________"<<endl;

    cout<<"Rincian Pembayaran :"<<endl;
    cout<<"Paket yang dipesan = Rp "<<harga<<endl;
    cout<<"Jumlah             ="<<jumlah<<endl;
    cout<<"                    ____________ x"<<endl;
    cout<<"Biaya              = Rp "<<biaya<<endl;
    cout<<"                    ____________ "<<endl;
    cout<<"GrandTotal         = Rp "<<biaya<<endl;
    cout<<"Tunai              = Rp ";cin>>bayar;
    kembali=bayar-biaya;
    cout<<"                    ____________ - "<<endl;
    cout<<"Uang Kembalian     = Rp "<<kembali<<endl;
    cin>>mad;

    }

    while(mad/='Y');
    cout<<"Terima kasih Atas Kunjungan Anda di Pondok Makan B4mzmutt";
    getch();
    return 0;
}
