#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arreglo, num, cont;
    printf("¿Cuántos elementos tiene el conjunto?\n");
    scanf("%d", &num);
    printf ("%p\n", arreglo); // nos apunta a nulo, ya tiene valor cargado
    arreglo = (int*)calloc(num , sizeof(int));// calloc recibe 2 argumentos, el num. de elementos y tamaño de estos elementos
   //calloc garantiza que te imprima 0 en cada una de las localidades de memoria reservadas 
   if(arreglo != NULL){// si calloc funciono 
        printf
        ("Vector reservado:\n\t[");
        for(cont =0; cont <num; cont++){
            printf("\t%d, %p", *(arreglo + cont), (arreglo +cont));// contigua             
        }
        printf("\t]\n");
        printf("Liberando el espacio reservado\n");
        free(arreglo);    
        arreglo =NULL;     
    }
    return 0;
}