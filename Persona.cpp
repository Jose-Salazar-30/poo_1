#include <iostream>				//Importamos la clase para ingresar a metodos de C++
using namespace std;			//Se colcoca el metodo de uso general

class Persona {					//Se define el nombre de la clase
	protected : string nombres,apellidos,direccion,fecha_nacimiento;			//Se colocan los atributos de la clase
				int telefono;				
	// Constructor
	Persona(){
	}
	Persona(string nom, string ape, string dir, int tel, string fn){
		nombres = nom;
		apellidos = ape;
		direccion = dir;
		telefono = tel;
		fecha_nacimiento = fn;
	}
	
	//Metodos
	void crear();
	void leer();
	void actualizar();
	void borrar();	
};
