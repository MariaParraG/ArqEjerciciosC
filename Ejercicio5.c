#include <stdio.h>

double productoEscalar(double v1[], double v2[], int n){
    double producto=0;
    for(int i=0;i<n;i++){
        producto+=v1[i]*v2[i];
    }
    return producto;
}

void productoVectorial(double v1[], double v2[], double resultado[]){
    resultado[0]=v1[1]*v2[2]-v1[2]*v2[1];
    resultado[1]=v1[2]*v2[0]-v1[0]*v2[2];
    resultado[2]=v1[0]*v2[1]-v1[1]*v2[0];
}

int main(){
    double v1[]={1, 2, 3};
    double v2[]={4, 5, 6};
    double resultado[3];

    printf("Producto escalar: %.2f\n", productoEscalar(v1, v2, 3));
    productoVectorial(v1, v2, resultado);
    printf("Producto vectorial: [%.2f, %.2f, %.2f]\n", resultado[0], resultado[1], resultado[2]);

    return 0;
}
