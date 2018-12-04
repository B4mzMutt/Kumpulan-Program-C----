//Implementasi fungsi
//Bambang Wijonarko
//311810581
//TI.18.E.1
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;
void fungsi();
int nilai,x,y;
int main()
 {
    cout<<"-Program Implementasi Fungsi-\n\n";
    cout<<"Tentukan nilai x:";
    cin>>x;
    cout<<"Tentukan nilai y:";
    cin>>y;
    cout<<endl<<endl;
    fungsi();
    cout<<endl<<"[Bambang Wijonarko]";
    cout<<endl<<"STT Pelita Bangsa"<<endl;
    system("pause");
}
void fungsi()
{
    nilai=((2*x)+(3*y)+1);
    cout<<"f(x,y)=2x+3y+1\n";
    cout<<endl;
    cout<<"f("<<x<<","<<y<<")="<<"2("<<x<<")+3("<<y<<")+1="<<nilai;
    cout<<nilai;
    cout<<endl<<endl;
    getch();


 }


