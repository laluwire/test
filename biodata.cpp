#include <iostream>
using namespace std;
 int main(){
    //
    string bio[3];
    
    cout<< "tuliskan nama   :";
    cin>>bio[0];
    cout<< "tuliskan nim    :";
    cin>>bio[1];
    cout<< "silahkan pilih (Teknik informatika/Sistem informasi): ";
    cin>>bio[2];

    cout<<"------biodata-----"<<endl;
    cout<< "NAMA    : "<<bio[0]<<endl;
    cout<< "NIM     : "<<bio[1]<<endl;
    cout<< "PRODI   : "<<bio[2];
    
    if((bio[2] == "TI") || (bio[2] == "ti")){
        cout<<" :Teknik informatika";
    }else if((bio[2] == "SI") || (bio[2] == "si")){
        cout<<" :sistem informasi";
    }else{
        cout<<"tidak valid"<<endl;
    }
 }