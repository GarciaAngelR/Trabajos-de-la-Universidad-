// ejercio 1
#include<iostream>
using namespace std;
int main() 
{        
    int numSoc;    
    cout << "Ingrese el numero de socios: ";
    cin >> numSoc;string nombres[numSoc];
    // Ingreso de datos
	for ( int i=0; i< numSoc; i++ ) 
	{        
	cout << "Ingrese el nombe del socio " << (i+1) << ": ";        
	cin >> nombres[i];    }    
	// Mostrar longitud de cada nombre    
	for ( int i=0; i< numSoc; i++ ) 
	{        
	cout << "\n\nNombre: " << nombres[i];        
	cout << "\nLongitud: " << nombres[i].length();
	    
	}        
	cout << "\n\n";    
	system("pause");
	}
