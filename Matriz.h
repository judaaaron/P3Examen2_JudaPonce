#ifndef MATRIZ_H
#define MATRIZ_H

#include "Object.h"
#include <iostream>
#include <string>
using std::string;
#include <vector>
using std::vector;
#include <cmath>
using std::sqrt;

class Matriz : public Object
{
public:
		Matriz(string cadena){
			this->cadena=cadena;
			makeVector();
			
		}
		~Matriz();
		
		vector<int>& getNumeros(){
			return this->numeros;
		}
		
		// pasar los numeros de la cadena al vector
		void makeVector(){
			for(int i=0;i<cadena.size();i++)
				if(cadena[i]>47&&cadena[i]<58)
					numeros.push_back(cadena[i]-48);			
		}
		
		int** matrizPrimitiva(){
			int raiz = sqrt(numeros.size());
			
			int** matrizPrimitiva = NULL;
			matrizPrimitiva = new int*[raiz];
			
			for(int i=0;i<raiz;i++)
				matrizPrimitiva[i] = new int[raiz];
				
			int cont = 0;
			for(int i=0;i<raiz;i++)
				for(int j=0;j<raiz;j++){
					matrizPrimitiva[i][j] = numeros[cont];
					cont++;
				}
				
			return matrizPrimitiva;	
		}
		
		void imprimirMatriz(int s){
			
		}
		
	protected:
		string cadena;
		vector<int> numeros;

};

#endif
