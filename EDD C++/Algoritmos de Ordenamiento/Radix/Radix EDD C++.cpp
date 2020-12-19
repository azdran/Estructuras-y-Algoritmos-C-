#include<math.h>
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#define NUMELTS 20

using namespace std;

void radixsort(int x[], int n)
{
	int front[10], rear[10];
	struct{
		int info;
		int next;
		
	} node[NUMELTS];
	int exp, first, i, j, k, p, q, y;
	
	//inicializar una lista vinculada
	for(i = 0;i < n-1; i++){
		node[i].info = x[i];
		node[i].next = i+1;
	}
	node[n-1].info = x[n-1];
	node[n-1].next = -1;
	first = 0; // es la cabeza de la lista vinculada.
	
	for(k = 1;k < 5; k++){
		for(i = 0;i < 10; i++){
			//Inicializamos las colas
			rear[i] = -1;
			front[i] = -1;
		}
		
		//procesar cada elemento de la lista
		while(first != -1){
			p = first;
			first = node[first].next;
			y = node[p].info;
			exp = pow(10, k-1);
			j = (y/exp) % 10;
			
			q = rear[j];
			if(q == -1)
				front[j] = p;
			else
				node[q].next = p;
			rear[j] = p;
		}
		
		
		//En este punto cada registro se encuentra  en su cola basandonos en el digito k
		for(j = 0; j < 10 && front[j] == -1; j++);
		;
		
		first = front[j];
		
		//vincular las colas restantes
		while(j<=9){ //verifica si ha terminado
			// encontrar el elemento siguiente
			for(i=j+1;i<10 && front[i] == -1; i++);
			;
			if(i<=9){
				p=i;
				node[rear[j]].next = front[i];
			}
			j=i;
		}
		node[rear[p]].next = -1;
	
	}
	
	//copiar de regreso el valor original
	for(i =0; i<n;i++){
		x[i] = node[first].info;
		first = node[first].next;
	}
	
}

int main (void){
	
	int x[50] = {0}, i;
	static int n;
	int m;
	
	cout << endl << "|--------------------------------------------|";
	cout << endl << "|             ° METODO RADIXSORT °           |";
	cout << endl << "|--------------------------------------------|";
	cout << endl << "|- Instituto Tecnologico Nacional de Mexico -|\n";
	
	cout<<"\n\nCuantos Numeros Vamos a Ordenar: ";
	scanf( "%d", &m);
	cout<<"------------------------------------------------"<<endl;
	for(n=0;n<m; n++){
	
		cout<<"Ingresa Valor: ";
		if(!scanf("%d", &x[n])) break;
	}
	
	cout << endl << "|--------------------------------------------|";
	cout << endl << "|             ° METODO ORDENADO °            |";
	cout << endl << "|--------------------------------------------|\n";
	if(n)
		radixsort(x,n);
	for(i = 0; i < n; i++)
		printf("\n[%d] ", x[i]);
		
	return 0;
}

