#include <stdio.h>  
#include <math.h>   

// Función para calcular las raíces de una ecuación cuadrática
// Recibe los coeficientes 'a', 'b' y 'c' de la ecuación ax^2 + bx + c = 0
void calcularRaices(double a, double b, double c){
    double discriminante = b*b - 4*a*c;  // Calcula el discriminante (b^2 - 4ac)
    
    // Si el discriminante es negativo, no hay raíces reales
    if(discriminante < 0){
        printf("No hay raíces reales.\n"); 
    }else {
        // Si el discriminante es positivo o cero, calculamos las raíces
        double raiz1 = (-b + sqrt(discriminante)) / (2*a);  // Calcula la primera raíz usando la fórmula
        double raiz2 = (-b - sqrt(discriminante)) / (2*a);  // Calcula la segunda raíz usando la fórmula
        // Imprime las dos raíces con dos decimales de precisión
        printf("Las raíces son %.2f y %.2f\n", raiz1, raiz2);  
    }
}

int main(){
    // Llama a la función calcularRaices con los coeficientes de la ecuación x^2 - 3x + 2 = 0
    calcularRaices(1.0, -3.0, 2.0);
    return 0;  
}
