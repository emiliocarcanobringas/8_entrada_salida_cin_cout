/*Este programa muestra como se lleva a cabo en C++ la entrada y salida de datos, gracias a la librería iostream, 
y el acceso al espacio de nombres para hacer uso de cin y cout, se agregó además la librería estándar de 
regionalización locale.h y se le asignó el valor: Idioma español para poder escribir palabras acentos*/

#include <iostream>//Librería estándar de entrada o salida de datos
# include <locale.h>//Librería estándar de localización (regionalización)

using namespace std;//Damos acceso al espacio de nombres

int main(){
	setlocale(LC_CTYPE, "Spanish");//Llamamos a la librería y colocamos el valor para manejo de caracteres, le asignamos el idioma español
	cout<<"Este es un ejemplo de variable de tipo entero"<<endl; //Imprimimos este mensaje en pantalla
	int numero;//Definimos la variable como número entero
	
	cout<<"Digite su número"<<endl;//Solicitamos el usuario un valor para la variable
	cin>>numero;
	
	cout<<"\nEl numero que digito es: "<<numero;//Imprimimos la variable que introdujo el usuario
	
	return 0;//Finalizamos el programa
	
}
