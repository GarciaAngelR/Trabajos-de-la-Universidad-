// ejercicio 2
#include <iostream>
using namespace std;
int main(int argc, char *argv[])  
{   
    // declaramos las variables int= entero, ma=maximo me=menor 
    int numero[10], ma=0, me;    
    for(int i=0; i<10; i++)
	{        
	cout<<"Ingrese el "<<(i+1)<<"� numero: ";        
	cin>>numero[i] ;     
	}    
	for(int i=0; i<10; i++){           
	//Hallar el mayor n�mero           
	ma=max(ma, numero[i]);           
	//Hallar el menor n�mero,. se hace el if porque no tenemos el mayor valor posible           
	if(i==0)
	{                
	me=numero[i];            
	}
	else
	{               
	me=min(ma, numero[i]);           
	}    
	}    
	cout<<endl;    
	cout<<"El mayor n�mero es: "<< ma<< endl;    
	cout<<"El menor n�mero es: "<< me<< endl<< endl;    
	}
