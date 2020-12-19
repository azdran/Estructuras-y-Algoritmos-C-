#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
using namespace std;
void mostrarOrden(int *numeros, int);
void quicksort(int *numeros, int, int);

int main(){
	
	printf( "|-------------------------------------|");
	printf( "|          ° METODO QUICKSORT °       |");
	printf( "|-------------------------------------|\n");
	
int numeros[100000];
int i, n, opc, aux, j, dato, menor, mid, mitad, inf, sup;	
 
 printf ("Inserta la cantidad de valores que deseas ingresar\n");
	scanf ("%i",&n);
 
	for(i=1;i<=n ;i++){
		printf ("Ingrese el valor ");
		scanf ("%i", &numeros[i]);
}

system("cls");
printf ("Valores ingresados: \n");
	for(i=1;i<=n ;i++){
		printf ("%i\n", numeros[i]);

}

 
 quicksort(numeros, 0, n - 1);
 mostrarOrden(numeros, n);
 return 0;
}


void mostrarOrden(int *numeros, int n){
printf ("\nElementos del array ordenados ascendentemente: \n");
 for(int i = 1; i <= n; i++){
printf ("[%i] ", numeros[i]);
 }
printf( "\n\n\n|-------------------------------------|\n");
printf( "|          ° METODO QUICKSORT °       |\n");
printf( "|-------------------------------------|\n");

}

//funcion para ordenar lista de numeros

void quicksort(int *numeros, int primero, int ultimo){
 //el quicksort necesita una lista, la 1ra y ultima posicion del array
 //el pivote es el valor medio de la lista
 int central, i, j, pivote;
 central = (primero + ultimo)/2; //posicion central del array
 //capturar valor del medio del array
 pivote = numeros[central];
 //esta igualacion es para separar los segmentos
 i = primero;
 j = ultimo;
 
 //toda lista necesita un recorrido, en este caso con do while

 do{
  //separando en 2 partes el array
  while(numeros[i] < pivote) i++; //separando valores menores del pivote
  while(numeros[j] > pivote) j--; //separando valores mayores del pivote
  if(i <= j){ 
   //se hace el intercambio de valores
   int temporal;
   temporal = numeros[i];
   numeros[i] = numeros[j];
   numeros[j] = temporal;
   i++;
   j--;
  }
 } while(i<=j);
 
 if(primero < j)
  quicksort(numeros, primero, j);
 if(i < ultimo)
  quicksort(numeros, i, ultimo);
}



