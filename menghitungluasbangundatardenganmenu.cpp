#include <iostream>

using namespace std;
main()
{
	int pilihan;
	cout<<"Nama        : Bambang Wijonarko\n";
	cout<<"Nim         : 311810581\n";

	cout<<"=================================\n";
	cout<<"=====PROGRAM MENGHITUNG LUAS=====\n";
	cout<<"=================================\n";
	cout<<"1. Luas Segitiga\n";
	cout<<"2. Luas Persegi Panjang\n";
	cout<<"3. Luas Lingkaran\n";
	cout<<endl;
	cout<<"Maukan pilihan antara (1-3) : ";
	cin>>pilihan;
	cout<<"==================================\n";

	switch(pilihan)
	{
		int a,t,p,l,r,luas;
		case 1:
		cout<<"Luas Segitiga\n";
		cout<<"==============================\n";
		cout<<"Masukan alas segitiga   : ";cin>>a;
		cout<<"Masukan tinggi segitiga : ";cin>>t;
		luas=0.5*a*t;
		cout<<"Jadi Luas Segitiga adalah : "<<luas<<endl;
		break;
		case 2:
		cout<<"Luas Persegi panjan\n";
		cout<<"==============================\n";
		cout<<"Masukan panjang persegi panjang  : ";cin>>p;
		cout<<"Masukan lebar persegi panjang    : ";cin>>l;
		luas=p*l;
		cout<<"Jadi Luas Persegi Panjang adalah : "<<luas<<endl;
		break;
		case 3:
		cout<<"Luas Lingkaran\n";
		cout<<"===============================\n";
		cout<<"Masukan jari-jari lingkaran : ";cin>>r;
		luas=3.14*r*r;
		cout<<"Jadi Luas Lingkaran adalah  : "<<luas;
		break;

	}
	cin.get();
	return 0;
}