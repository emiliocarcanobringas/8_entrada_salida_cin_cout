/*Este programa muestra como se lleva a cabo en C++ la entrada y salida de datos, gracias a la librer�a iostream, 
y el acceso al espacio de nombres para hacer uso de cin y cout, se agreg� adem�s la librer�a est�ndar de 
regionalizaci�n locale.h y se le asign� el valor: Idioma espa�ol para poder escribir palabras acentos*/

#include <iostream>//Librer�a est�ndar de entrada o salida de datos
# include <locale.h>//Librer�a est�ndar de localizaci�n (regionalizaci�n)

using namespace std;//Damos acceso al espacio de nombres

int main(){
	setlocale(LC_CTYPE, "Spanish");//Llamamos a la librer�a y colocamos el valor para manejo de caracteres, le asignamos el idioma espa�ol
	cout<<"Este es un ejemplo de variable de tipo entero"<<endl; //Imprimimos este mensaje en pantalla
	int numero;//Definimos la variable como n�mero entero
	
	cout<<"Digite su n�mero"<<endl;//Solicitamos el usuario un valor para la variable
	cin>>numero;
	
	cout<<"\nEl numero que digito es: "<<numero;//Imprimimos la variable que introdujo el usuario
	
	return 0;//Finalizamos el programa
	
}
