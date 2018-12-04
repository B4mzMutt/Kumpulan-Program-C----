#include <stdio.h>
#include <conio.h>
#include <iostream>


int faktorial(int N); /*prototype fungsi factorial*/

int main()
{
	int N;
	int fak;
	printf("berapa faktorial ? "); scanf("%d", &N);
	fak - faktorial(N);
	printf("%d faktorial-%d\n", N, fak);
	getch();
}
/*-----fungsi untuk menghitung nilai N faktorial-----*/
int faktorial(int N)  /*definisi fungsi*/
{
	int I;
	int F=1;
	if (N <= 0)
		return(0);
	for (I = 2; I <= N; I++)F *= I;
	return(F);


}