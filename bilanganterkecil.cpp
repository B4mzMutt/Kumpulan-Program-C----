#include <iostream>

using namespace std;
int tampilkan(int a, int b, int c){
   int bil;
   if(a < b, a < c){
    cout << a << endl;
    cout << "Bilangan Terkecil" << endl;
   }
   else if(b < a, b < c){
    cout << b << endl;
    cout << "Bilangan Terkecil" << endl;
   }
   else{
    cout << c << endl;
    cout << "Bilangan Terkecil" << endl;
   }
   return bil;
}
int main()
{
    int bil1, bil2, bil3, Hasil;
    cout << "Menentukan Bilangan Terkecil dari Tiga Bilangan" << endl;
    cout << "Masukan nilai Bilangan Pertama: ";
    cin >> bil1 ;
    cout << endl;
    cout << "Masukan Bilangan Kedua: ";
    cin >> bil2 ;
    cout << endl;
    cout << "Masukan Bilangan Ketiga: ";
    cin >> bil3 ;
    cout << endl;

    Hasil = tampilkan(bil1,bil2,bil3);
    cout << Hasil << endl;

    cin.get();
    return 0;
}

