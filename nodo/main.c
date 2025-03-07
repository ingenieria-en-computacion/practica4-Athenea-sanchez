#include "nodo.h"
#include <stdio.h>
#include <stdlib.h>

int main (){ //hi
nodo *primero=NULL; 
nodo *temp; 
nodo *otro; 
primero= crear_nodo(1); 
otro= crear_nodo(1); // depende del orden que se va pidiendo la memoria
otro->sig=crear_nodo(3);
primero ->sig= crear_nodo(2);
primero->sig->sig=crear_nodo (3); 
printf("%p\n", primero); 
print_nodo (primero); 

printf("%p\n", primero->sig->sig); 
print_nodo (primero->sig->sig); 


borrar_nodo(primero->sig);
borrar_nodo (primero); 
borrar_nodo (otro);   
borrar_nodo(primero->sig->sig);
return 0; 


}