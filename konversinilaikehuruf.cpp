#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
int main(){
	int hasil;
	int nilai;
	char indeks;
    cout << "Masukan Nilai Ujian : ";
	cin >> nilai;

	hasil = indeks;
	cout << "Grade :" << hasil;
	if ((nilai >= 90)&&(nilai<=100)) {
		indeks = 'A';
		cout << indeks;
	}
	else if ((nilai >= 80) && (nilai < 90)) {
		indeks = 'B';
		cout << indeks;
	}
	else if ((nilai >= 60) && (nilai < 80)) {
		indeks = 'C';
		cout << indeks;
	}
	else if ((nilai >= 50) && (nilai < 60)) {
		indeks = 'D';
		cout << indeks;
	}
	else {
		indeks = 'E';
		cout << indeks;
	}

	cin.get();
	return 0;
}
