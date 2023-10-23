#include <ctime> // bliblioteca de funciones del reloj
#include <iostream> // Funciones E/S
#include <math.h> // Funciones matematicas
using namespace std;
void mostrarTiempo(clock_t tiempo);
int main(){
	clock_t tiempo = clock(); // iniciar el reloj para calcular el tiempo 
	// variables
	long long i = 0;
	double sum = 0;
	// Inicia el ciclo de alrededor de 28 segundos 
	for (i = 1; i < 1000000000; i++){
		// Funcion que genera alta carga de procesamiento
		// Tomamos un numero doble (decimal largo) y le aplicamos logaritmo natural 
		sum = sum + log(double(i));
	}
	
	// Mostramos el tiempo que le tomo ejecutar
	mostrarTiempo(tiempo);
	
	// Salimos 
	cout << "Pulse para salir...";
	cin.get();
	return 0;
}
// Funcion que calcula el tiempo de ejecucion 
void mostrarTiempo(clock_t tiempo){
	tiempo = clock() - tiempo;
	cout << endl << "Tiempo de ejecucion es " << double(tiempo) / CLOCKS_PER_SEC << " seg. " << endl;
}

