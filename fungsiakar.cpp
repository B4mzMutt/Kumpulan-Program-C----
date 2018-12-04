#include <iostream>
#include <cmath> /*mengandung fungsi trigonometri*/

using namespace std;

/*library cmath : referesi www.cppreferensi.com
ceil(x)		<-	pembulatan keatas
cos(x)		<-	cosinus
exp(x)		<-	exponen
fabs(x)		<-	nilai absolut dalam float
floor(x)	<-	pembulatan kebawah
fmod(x)		<-	modulus dalam float
log(x)		<-	logaritma dengan basis natural
log10(x)	<-	logaritma dengan basis 10
pow(x,y)	<-	x pangkat y
sin(x)		<-	sinus
sqrt(x)		<-	akar kuadrat
tan(x)		<-	tangen
*/

int main()
{
	{
	int x;
	cout << "menghitung akar dari x: ";
	cin >> x;

	double y = sqrt(x);
	cout << "akarnya adalah: " << y << endl;
    }
	
	cin.get();
	return 0;
}
