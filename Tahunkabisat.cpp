#include <iostream>
using namespace std;

int main()
{
    int tahun;
    cout<<"menentukan tahun kabisat"<<endl<<"b4mzlavigne@gmail.com"<<endl<<endl;
    cout<<"masukkan tahunnya : ";
    cin>>tahun;
    if (tahun%400==0){
        cout<<"kabisat";
    } else if ((tahun%400!=0) && (tahun%100==0)){
        cout<<"bukan kabisat";
    } else if ((tahun%400!=0) && (tahun%100!=0)){
               if (tahun%4==0){
        cout<<"kabisat";
        }
    } else if ((tahun%400!=0) && (tahun%100!=0)){
        if (tahun%4!=0){
        cout<<"bukan kabisat";
        }
    }
    cout<<endl<<endl;
    main();
    return 0;
}