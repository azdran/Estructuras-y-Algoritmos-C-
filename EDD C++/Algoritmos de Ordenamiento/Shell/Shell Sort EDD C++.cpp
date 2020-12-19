#include <iostream>

using namespace std;

void LeerArreglo(int,float[]);
void Shell(int,float[]);
void MostrarArreglo(int,float[]);

int main(int argc, char*argv[]){
	float x[500];
	int n;
	
	cout << endl << "|-------------------------------------|";
	cout << endl << "|           ° METODO SHELL °          |";
	cout << endl << "|-------------------------------------|\n";
	
	
	cout<<"Numero de Datos a leer ";
	cin>>n;
	LeerArreglo(n,x);
	Shell(n,x);
	cout<<"\n***ELEMENTOS ORDENADOS***"<<endl;
	MostrarArreglo(n,x);
	return 0;
} 
void LeerArreglo(int n,float array[]){
	for(int i=0; i<n; i++){
	cout<<"Ingrese elemento" "["<<i<<"]:";
	cin>>array[i];
	  }
	}
void Shell(int n,float x[]){
	int i, salto, bandera;
	float temporal;
	for (salto=n/2; salto>0;salto=salto/2)
	   do{
	   	bandera=0;
	   	for(i=0;i<n-salto;i++)
	   	  if(x[i]>x[i+salto]){
	   	   temporal = x [i];
		 	x[i]=x[i+salto];
		 	x[i+salto]=temporal;
		 	bandera=1;
		 	
		   }
	   } while(bandera); 
}

void MostrarArreglo(int n, float array[]){
	int i;
	for(i=0;i<n;i++)
	  cout<<"posicion["<<i<<"]="<<array[i]<<endl;
	
	  
}
