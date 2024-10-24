#include <iostream>
using namespace std;
int main() {
int a, b, c;
bool hasil;
//Ini operator aritmatika 
cout<<"a=";
cin>>a;
cout<<"b=";
cin>>b;

c=a+b;
cout<<"a + b= "<<c<<endl;
c=a-b;
cout<<"a - b= "<<c<<endl;
c=a*b;
cout<<"a * b= "<<c<<endl;
c=a/b;
cout<<"a / b= "<<c<<endl;
c=a%b;
cout<<"a % b= "<<c<<endl;
cout<<endl;

//ini operator penugasan

cout<<"a=";
cin>>a;
cout<<"b=";
cin>>b;

a+=b;
cout<<"a+=b= "<<a<<endl;
a-=b;
cout<<"a-=b= "<<a<<endl;
cout<<endl;

//ini operator perbandingan

cout<<"a= ";
cin>>a;
cout<<"b= ";
cin>>b;

c=a==b;
cout<<"a == b = "<<c<<endl;
c=a>=b;
cout<<"a >= b = "<<c<<endl;
c=a<=b;
cout<<"a <= b = "<<c<<endl;
cout<<endl;

//ini operator logika
cout<<"a= ";
cin>>a;
cout<<"b= ";
cin>>b;

c=a&&b;
cout<<"a && b = "<<c<<endl;
c=a||b;
cout<<"a || b = "<<c<<endl;
cout<<"!a = "<<!a<<endl;
}