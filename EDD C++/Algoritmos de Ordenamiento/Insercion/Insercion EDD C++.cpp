// metodo de insercion 
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	
	cout << endl << "|-------------------------------------|";
	cout << endl << "|         ° METODO INSERCION °        |";
	cout << endl << "|-------------------------------------|\n";
	
	
	int arr[50]; //  6 4 4 3 2 1 
	int i,posicionactual,valorposicion,n;
	cout<< "Cuantos numeros quieres Ordenar: "; cin >> n;
	for (i=0; i<n ; i++){
		cout<<"INGRESA EL NUMERO No. "<< i << ": "; cin >> arr[i];
	} 
	   for(i=0; i<n ; i++){
	   	posicionactual = i;
	   	valorposicion = arr[i];
	   	  while ((posicionactual > 0)&&(arr[posicionactual-1]>valorposicion)){
	   	  	 arr[posicionactual] = arr[posicionactual-1];
	   	  	 posicionactual--;
			 }
                        arr[posicionactual] = valorposicion;                  	   
	   }
	
	
	cout << endl << "|--------------------------------------------|";
	cout << endl << "|             ° METODO INSERCION °           |";
	cout << endl << "|--------------------------------------------|";
	cout << endl << "|- Instituto Tecnologico Nacional de Mexico -|\n";
	
	
	cout<< "\nLOS NUMEROS ORDENADOS: ";
	for(i=0; i<n; i++){
		cout << "\n" << arr[i];
	}
	
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	system("pause");
	return 0;
}
