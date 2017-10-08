//******Encapsulamiento************
//Debera existir la Herencia y el Polimorfismo
//El primer lenguaje uso la palabra class para delcarar una clase, es muy parecida a la estrucura(struct)
//Los datos son publicos en la estructura
//Los datos son privados en la clase
//Tipos de Clase(class): Public / Private / Protected           son palabras reservadas
#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

class prueba //struct prueba
{
	private:
		int a; //ese dato queda protegido o privado
	public:
		void set_a(int);
		int get_a();
};
void prueba::set_a(int a1)
{
	a=a1;
}

int prueba::get_a()
{
	return a;
}


int main()
{
	prueba p;
	p.set_a(10);
	cout<<"a= "<<p.get_a();
	getch();
	return 0;
}
