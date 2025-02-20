#include <stdio.h>  

// Función que recibe un número de tipo 'double' y devuelve su doble
double doble(double x){
    return 2*x;  // Retorna el doble del número recibido como argumento
}

int main(){
    double valor = 5.0;  // Declara una variable 'valor' de tipo double e inicializa con 5.0
    printf("El doble de %.2f es %.2f\n", valor, doble(valor));  // %.2f indica que se imprimirá un número de tipo float/double con dos decimales de precisión
    return 0;  
}
