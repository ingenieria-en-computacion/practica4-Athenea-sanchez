#include <stdio.h>
#include <stdlib.h>//biblioteca para funciones de manera dinamica

int main(){
    int *arreglo, num, cont;
    printf("¿Cuántos elementos tiene el conjunto?\n");
    scanf("%d", &num);
    arreglo = (int*)malloc(num *sizeof(int));//reserva memoria depende del numero que ingrese el usuario
    if(arreglo != NULL){//para saber si creo
        printf
        ("Vector reservado:\n\t[");
        for(cont =0; cont <num; cont++){//imprimir los valores del arreglo, basura
            printf("\t%d, %p", *(arreglo + cont), (arreglo+cont));  //la memoria es contigua           
        }
        printf("\t]\n");
        printf("Liberando el espacio reservado\n");
        free(arreglo);    
        arreglo= NULL;     
    }
    return 0;
}