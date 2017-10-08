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

friend ostream &operator<<(ostream &stream,const String &s)
{
	if(s.str!=NULL)
	{
		stream<<s.str;
	}
	return stream;
}

String(int n,char c)
{
	len = n;
	str = new char [len +1];
	for (int i=0;i<len;i++)
	str[i]=c;
	str[len]=0;
}	 

void operator=(char *cad)  //realizamos la sobrecarga
{
	if(str!=NULL)
	delete str;
	len=-1;
	while(cad[++len]!=0);
	str= new char [len +1];
	for (int i=0; i<=len;i++)
	str[i]=cad[i];
}

void operator=(int x) // como tarea modificar aqui y ponerlo como un double 
{
	char num[12];
	int i,j,x1=x;
	i=0;
	while (x1!=0)
	{
		num [i++]=x1%10+48;
		x1/=10;
	}
	if(str!=NULL)
		delete str;
	len =i;
	str=new char[len+1];
	for(i=len-1,j=0;j<len;i--,j++)
		str[j]=num[i];
	str[len]=0;
}
//+++++++++++++++05 de Octubre de 2017+++++++++++
//constructor de copia
String(const String &s)
{
	len = s.len;
	str = new char[len+1];
	for (int i=0;i<=len;i++)
	{
		str[i]=s.str[i];
	}
}

//sobrecarga de operador de igualdad
String operator =(const String &s)
{ 								//this es un apuntador que  esta apuntando a una clase
	if(&s==this)               //la direccion se saca con &
	   return *this;           //aqui verificamos si se trata del mismo objeto   	
	if(str!=NULL)
	{
		delete str;
	}
	len=s.len;
	str= new char[len+1]; 
	for (int i=0;i<=len;i++)//hacemos la copia de la informacion
	{
		str[i]=s.str[i];
	}
	return *this;
}

//sobrecarga de operador suma
String operator +(const String &s)
{
	String r; int i,j;
	r.len = len+s.len;
	r.str = new char[r.len+1];
	for(i=0;i<len;i++)
	{
		r.str[i]=str[i];
	} //ahora realizamos la concatenacion con la cadena
	for(j=0;j<=s.len;i++,j++)
	{
		r.str[i]=s.str[j];
	}
return r;
}

String operator=(double x)
{
	int a,i,j,k;
	float b;
	if(str!=NULL)
		delete str;
		char f[20];
		char c;
		a=x;
		i=0;
		if(a==0)
		{
			f[i++]='0';
		}
		else
		{
			while(a>0)
			{
				f[i++]=a%10+48;
				a/=10;
			}
			for(j=0,k=i-1;j<i/2;j++,k--)
			{
				c=f[j];
				f[j]=f[k];
				f[k]=c;
			}
			f[i++]='.';
			a = x;
			b=x-a;
			for(j=0;j<=5;j++,i++)
			{
				b*=10;
				a=b;
				f[i]=a+48;
				b-=a;
			}
			len=i;
			str=new char[len+1];
			for(i=0;i<len;i++)
				str[i]=f[i];
			str[i]=0;
			return *this;
		}
}

String operator+(double x)
{
	String r,a;
	r=x;
	a= *this;
	r=a+r;
	return r;
}

char &operator[](int i)
{
	if(i<len)
	return str[i];
	return str[0];
}

};
 
/*int main ()
{
	String a,b(100,'*');
	a="123456";
	cout<<"len(a)= "<<a.length ();
	cout<<"\nlen(b)= "<<b.length (); 
	cout<<"\na= "<<a;
	cout<<"\nb= "<<b;
	getch ();
	return 0;
}*/ 

int main ()
{
	//String a("Hola"),b(10,'.'),c;
	//c=a+1.12345F;
	//cout<<"c= "<<c;
	String a;
	a=123.456;
	a[5]='*';
	cout<<a;
	getch();
	return 0;
}
