#include "Estudiante.cpp"
#include <iostream>
using namespace std;

main() {
	string nom,ape,dir,fn,car;
	int tel;
	
	cout<<"Ingrese su nombre";
	cin>>nom;
	cout<<"Ingrese su apellido";
	cin>>ape;
	cout<<"Ingrese su direccion";
	cin>>dir;
	cout<<"Ingrese su telefono";
	cin>>tel;
	cout<<"Ingrese su fecha de naciento";
	cin>>fn;
	cout<<"Ingrese su carnet";
	cin>>car;
	//Instancia de un objeto
	cout<<" ------------------Mostrar Datos---------------"<<endl;
	Estudiante estudiante = Estudiante(nom,ape,dir,tel,fn,car);
	estudiante.leer();
}
