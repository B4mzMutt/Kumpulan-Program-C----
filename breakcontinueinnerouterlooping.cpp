#include <iostream>

using namespace std;

int main()
{
	//Break & Continue
	cout << "Tampilan Break" << endl;
	for (int i = 0; i <= 10; i++) {
		if (i == 5) {
			break;
		}
		cout << i << endl;
		cout << endl << endl;
	}
	cout << "Tampilan Continue" << endl;
	for (int i = 0; i <= 10; i++) {
		if (i == 5) {
			continue;
		}
		cout << i << endl;
		cout << endl << endl;
	}
	//Inner & Outer Looping
	cout << "Selanjutnya Inner & Outer Looping" << endl;
	cout << "Bamz Belajar Looping" << endl;
	cout << "====================" << endl;
	cout << endl << endl;
	for (int a = 1; a <= 10; a++) {
		for (int b = 1; b <= 10; b++) {
			cout << a << "*" << b << "=";
			cout << a * b << "\t";
		}
		cout << endl;
	}
	cout << endl << endl;
	cout << "=====================" << endl;
	cout << "WAMMA INDALLAHI KHOIR" << endl;


	cin.get();
	return 0;
}