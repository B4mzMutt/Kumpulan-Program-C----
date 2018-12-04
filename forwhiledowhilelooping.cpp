#include <iostream>

using namespace std;

int main()
{   //while lopping
	cout << "Tampilan While Looping" << endl;
	int a = 1;
	while (a <= 10) {
		cout << "Bamz";
		cout << a << endl;
		a++;
	}
	cout << "Sampun while loopingnya" << endl;

	//Do While Looping
	cout << "Tampilan Do While Looping" << endl;
	int b = 1;
	do {
		cout << "Bamz";
		cout << b << endl;
		b++;
	} while (b <= 10);
	cout << "Sampun Do While Loopingnya" << endl;

	//For Looping
	cout << "Tamppilan For Looping" << endl;
	int total = 0;
	for (int Bamz = 1; Bamz <= 10; Bamz++) {
		total += Bamz;
		cout << Bamz << "||" << total << endl;
	}
	cout << "Alhamdulilah Rampung Guys" << endl;

	cin.get();
	return 0;
}