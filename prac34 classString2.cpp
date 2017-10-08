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

class String
{
	private:
		char *str;
		int len;
	public:
		String()
		{
			str = NULL;
			len=0;
			cout<<"\nConstructor\n";
		}
		~String()           //destructor
		{
			if (str!=NULL)
			{
				delete str; //liberamos la memoria
			}
			cout<<"\nDestructor\n";
		}

String(char *cad)
{
	len = -1;
	while(cad[++len]!=0);
	str= new char[len+1]; 
	for(int i = 0; i<=len;i++)
	str[i]=cad[i];
}

int length ()
	{
		return len;
	}
};
 
int main ()
{
	String a,b("Hola mundo");
	cout<<"len(a)= "<<a.length ();
	cout<<"\nlen(b)= "<<b.length (); 
} 
