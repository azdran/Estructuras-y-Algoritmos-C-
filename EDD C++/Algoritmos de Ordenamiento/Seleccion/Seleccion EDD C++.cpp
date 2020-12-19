#include<iostream>

using namespace std;

void Seleccion(int [], int);
void Imprimir(int [], int);

int main(){
	
	cout << endl << "|--------------------------------------------|";
	cout << endl << "|             � METODO SELECCION �           |";
	cout << endl << "|--------------------------------------------|";
	cout << endl << "|- Instituto Tecnologico Nacional de Mexico -|\n";
	
	
	int n;
	cout<<"\nCuanrtos elementos vamos a Ordenar"<<endl;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		
		cout<<"Ingrese el Numero "<<(i+1)<<" del Arreglo: ";
		cin>>a[i];
	}
	
	Seleccion(a , n);
	cout << endl << "|--------------------------------------------|";
	cout << endl << "|            � METODO SELECCION �            |";
	cout << endl << "|--------------------------------------------|\n";
	Imprimir(a , n);
}

void Seleccion(int a[], int n){
	
	int k, menor, i, j;
	
	for(i=0; i<n; i++){
		
		menor=a[i];
		k=i;
		
		for(j=i+1; j<n; j++){
			if(a[j]<menor){
				menor = a[j];
				k=j;
			}
			
		}
		a[k]=a[i];
		a[i]=menor;
		
	}
       // a[k]=a[i];
		//a[i]=menor;
		
	
}

void Imprimir(int a[], int n){
	
	cout<<"Numeros Ordenados de Menor a Mayor "<<endl;
	
	for(int i = 0; i < n; i++)
		cout<<"["<<a[i]<<" ]";
	
}
