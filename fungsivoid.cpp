#include <iostream>
#include <stdio.h>
using namespace std;

int kuadrat(int x) {
	int y;
	y = x * x;
	return y;
}
void tampilkan(int input) {
	cout << "menampilkan dengan void\n";
	cout << input << endl;
}
int main() {
	int input, hasil, a, b, pause;
	cout << "nilai kuadrat dari: ";
	cin >> input;
	hasil = kuadrat(input);
	tampilkan(hasil);

	cin.get();
	return 0;
}