//Programa que presenta las operaciones básicas
//Creado por stalin franci
// modificado ANGELICA ESTUPIÑAN 
//Fecha:29 -09-2022

#include<iostream>
using namespace std;

int main()
{
	float aex,aey,aes,aem,aed,aer;
	//Ingreso de datos
	cout<<"Ingrese en valor de aex=:";
	cin>>aex;
	cout<<"Ingrese en valor de aey=:";
	//Operaciones 
	cin>>aey;
	aes=aex+aey;
	aem=aex*aey;
	aed=aex/aey;
	aer=aex-aey;
	//Muestra los resutaldos.
	cout<<"Las suma de "<<aex<<" + "<<aey<<" = "<<aes<<endl;
	cout<<"Las multiplicacion de "<<aex<<" * "<<aey<<" = "<<aem<<endl;
	cout<<"Las division de "<<aex<<" / "<<aey<<" = "<<aed<<endl;
	cout<<"Las resta de "<<aex<<" - "<<aey<<" = "<<aer<<endl;
	return 0 ;

}
