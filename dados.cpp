//jugar dados
#include<iostream>
#include<cstdlib>
#include<ctime> 

using namespace std;

int main(){
	int valorMax = 6, valorMin = 1;
	srand(time(0));
	
	//formula para generar numeros dentro de un rango
short dado1 =	(rand() % (valorMax - valorMin + 1)) + valorMin;
	short dado2 =	(rand() % (valorMax - valorMin + 1)) + valorMin;
	
	cout<< dado1 << " , " << dado2;
	 
	return 0;
	
}