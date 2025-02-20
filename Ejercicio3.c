#include <stdio.h>

char convertirAMayuscula(char letra){
    return letra-('a'-'A');
}

int main(){
    char letra='b';
    printf("La letra mayúscula de %c es %c\n", letra, convertirAMayuscula(letra));
    return 0;
}
