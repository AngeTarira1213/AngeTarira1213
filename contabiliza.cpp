//Creado por stalin franci
// modificado ANGELICA ESTUPIÑAN 
//Fecha:29 -09-2022
#include<iostream>
using namespace std;
int main()
{
	int aei=0,ael;
	float aex,aes=0;
	cout<<"ingrese el limite l="; cin>>ael;
	do{
		
	cout<<"ingrese el numero x="; cin>>aex;
	aei=aei+1;
	aes=aes+aex;



	}while(aei<ael);
	cout<<"Se ingresaron "<<ael<<" numeros "<< "que sumaron "<<aes<<endl;
	return 0;



}
