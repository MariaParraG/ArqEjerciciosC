#include<stdio.h>

void convertirAMayuscula(char*letra){
    *letra=*letra-('a'-'A');
}

int main(){
    char letra='c';
    convertirAMayuscula(&letra);
    printf("La letra mayúscula es %c\n", letra);
    return 0;
}
