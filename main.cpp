#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
  int dato,raiz, aux;
 
  cout << "Pon un numero para obtener la raiz cuadrada:";
  cin >> dato;
  raiz = sqrt(dato);
  aux=raiz*raiz;
  if(aux==dato){
  	cout<<"Es matriz cuadrada";
  }else{
  	cout<<"No lo es";
  }
 
  cout << "La raiz cuadrada de " << dato << " es " << raiz << endl;
 
  return 0;
}


