#include <iostream>
 
using namespace std;
 
int main(){
int s1,s2,secim,sonuc;
cout<<"1. sayiyi gir: ";
cin>>s1;
cout<<"2. sayiyi gir: ";
cin>>s2;
cout<<"Secimini gir : 1- Topla 2-Cikar 3-Carp 4-Bol: ";
cin>>secim;
if(secim==1)
sonuc=s1+s2;
else if(secim==2)
sonuc=s1-s2;
else if(secim==3)
sonuc=s1*s2;
else if(secim==4)
sonuc=s1/s2;
else 
cout<<"yanlis secim";
cout<<"Sonuc : "<<sonuc;
}
