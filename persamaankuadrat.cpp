#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
int main(){

    float a,b,c,x1,x2;
    cout<<"masukan nilai a:";
    cin>>a;
    cout<<"masukan nilai b:";
    cin>>b;
    cout<<"masukan nilai c:";
    cin>>c;
    cout<<endl<<endl;
    x1=(b+sqrt(b*b-4*a*c))/2*a*c;
    x2=(b-sqrt(b*b-4*a*c))/2*a*c;
    cout<<"x1="<<x1<<endl<<endl;
    cout<<"x2="<<x2<<endl<<endl;
    getch();
    return 0;
}
