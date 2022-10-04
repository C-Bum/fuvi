//generar numeros aleatorios

#include<iostream>
#include<cstdlib>
#include<ctime> 
using namespace std;

int main(){

//long tiempoTranscurrido = time(0);
	srand(time(0));
	int aleatorio = rand() % 10;
	int num;
	cout<<"Divine un numero entre 0 y 10: "; cin>>num;
	
if (num == aleatorio){
	cout<<"	Flicidades, acertastes!";
} else {
		cout<<"	lo siento, no acertastes!";
}
	
	return 0;
}