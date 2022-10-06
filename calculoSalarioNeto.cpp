//Calculo salario neto

#include<iostream>
#include<string>

using namespace std;
//Variable globales
const double  tasaAntiguedad = 15;
const double   tasaINSS = 7;
const double  tasaINSSPatronal = 22.5;
const double  tasaIR = 15.6;
const double  tasaSindicato = 1;

int main(){
	string nombre;
	double  salarioBruto, ingresoNeto, ingresoTotal, deduccionesTotales; 
	double  montoINSS, montoIR, montoSindicato, montoINSSPatronal, ingresoAntiguedad;
	
		cout<< "Hola, Ingrese su nombre: "; cin >> nombre; 
	        cout<< " Hola " <<nombre << " Ingrese su salario bruto: $ "; cin >> salarioBruto;
	//	Ingresos
    ingresoAntiguedad = salarioBruto * (tasaAntiguedad/100);
	ingresoTotal = salarioBruto + ingresoAntiguedad;
	//Deducciones
	
	montoINSS = ingresoTotal * (tasaINSS/100);
	montoIR = ingresoTotal * (tasaIR/100);
	montoSindicato = salarioBruto * (tasaSindicato/100);
	deduccionesTotales = montoINSS + montoIR + montoSindicato;
	//Ingreso neto
	
	ingresoNeto = ingresoTotal - deduccionesTotales;
	// Deducción a la empresa(INSS Patronal)
	
	montoINSSPatronal = ingresoTotal * (tasaINSSPatronal/100);
	cout<<"Ingresos totales" << endl;
	cout<<"Nombre del empleado: " << nombre <<endl;
	    cout<<"Su salario bruto es de =  $" <<salarioBruto<< endl;
	    cout<<"ingreso de antiguedad =  $" << ingresoAntiguedad<<endl;
		cout<<"ingreso total =  $" << ingresoTotal<<endl;
	cout<<"Deducciones totales" << endl;
        cout<<"Monto sindicato  =  $" << montoSindicato<<endl;
        cout<<"Monto INSS  =  $" << montoINSS<<endl;
        cout<<"Monto IR =  $" << montoIR<<endl;
        cout<<"Monto deducciones totales =  $" << deduccionesTotales<<endl;
    cout<<"Ingreso total neto" << endl;
        cout<<"Ingreso neto =  $" << ingresoNeto<<endl;
    cout<<"Deducciones del empleador" << endl;
      cout<<"INSS patronal =  $" << montoINSSPatronal<<endl;
	return 0;
}