//PERCABANGAN BERSARANG
#include <iostream>
using namespace std;
int main(){
   /* string username, pasword;

    cout<<"masukan username";
    cin>>username;

    if(username == "masuk"){
        cout<<"pasword ";
        cin>>pasword;
        if(pasword == "123"){
            cout<<"selamat datang bos";
        }else{
            cout<<"salah";
        }
    }*/
   string laper, pesan;

   cout<<"selamat datang ";
   cout<<"kamu laper? ";
   cin>>laper;

   if (laper == "iya"){
    cout<<"pesan maknan \n";
    cout<<"----menu----";
    cout<<"ayam------\n";
    cout<<"tahu------\n";
    cout<<"tempe-----\n";
    cout<<"sayur-----\n";
    cin>>pesan;
    if (pesan == "ayam"){
        cout<<"ini makananmu";
    }else if(pesan =="tahu"){
        cout<<"ini makananmu";
    }else if(pesan =="tempe"){
        cout<<"ini makananmu";
    }else if(pesan =="sayur"){
        cout<<"ini makananmu";
   } else {
    cout<<"ga ada";
}
}
}