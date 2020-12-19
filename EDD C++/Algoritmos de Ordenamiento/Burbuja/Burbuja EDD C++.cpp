#include<iostream>

using namespace std ;

int main(){
	
	cout << endl << "|-------------------------------------|";
	cout << endl << "|          ° METODO BURBUJA °         |";
	cout << endl << "|-------------------------------------|\n";

	
 int n,aux;
 cout<<"\nIngrese la cantidad de numeros :";
 cin>>n;
 int V[n];

 for(int i=0;i<n;i++){
  cout<<"\n Numero "<<i+1<<" = ";
  cin>>V[i];
 }

 for(int i=0;i<n;i++){
  for(int j=i+1;j<n;j++){
   if(V[j]<V[i]){
    aux=V[i];
    V[i]=V[j];
    V[j]=aux;
    
   }
  }
 }

 cout<<"ELEMENTOS ORDENADOS EN FORMA ASCENDENTE"<<endl;
 for(int i=0;i<n;i++){
  cout<<V[i]<<endl;
 }
 return 0;
}

