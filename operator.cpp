#include <iostream>
using namespace std;
int main(){
    char op;
    float no1, no2, hasil;

    cout<<"kalkulator sederhana\n";
    cout<<"tulis angka pertama          :";
    cin>>no1;
    cout<<"masukan operator(+, -, *, /) :";
    cin>>op;
    cout<<"tulis angka kedua            :";
    cin>>no2;

    switch (op){
    case '+':
        hasil=no1+no2;
        cout<<"hasil "<<no1<<"+"<<no2<<"= "<<hasil<<endl;
        //break;
    case '-':
        hasil=no1-no2;
        cout<<"hasil "<<no1<<"-"<<no2<<"= "<<hasil<<endl;
        //break;
    case '*':
        hasil=no1*no2;
        cout<<"hasil "<<no1<<"*"<<no2<<"= "<<hasil<<endl;
        //break;
    case '/':
        if(hasil != 0) {
            hasil=no1/no2;
            cout<<"hasil "<<no1<<"/"<<no2<<"= "<<hasil<<endl;
        } else {
            cout<< "Error: tidak bisa di bagi dengan nol\n";
    }
        break;
    default:
        cout<<"ndak bisa begini\n";
        break;
    }
}