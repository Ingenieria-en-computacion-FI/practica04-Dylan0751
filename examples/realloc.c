#include <stdio.h>
#include <stdlib.h>


int main (){
  int *array, *array2;
  int elementos;
  
  printf("¿Cuantos elementos tiene el conjunto?\n");
  scanf("%d", &elementos);
  array = (int*)malloc(elementos*sizeof(int));
  
  if (array!=NULL){
    for(int i = 0; i < elementos; i++){
      printf("Escribe un valor para el arreglo: ");
      scanf("%d", (array + i));
    }
    printf("[ ");
    for(int i = 0; i < elementos; i++){
      printf("%d ", *(array + i));
    }
    printf("]\n");
    array2 = (int*)realloc(array, 2 *elementos *sizeof(int));
     if (array2!=NULL){
        for(int i = 0; i < 2*elementos; i++){
          printf("Escribe un nuevo valor: ");
          scanf("%d", (array2 + i));
        }
        printf("[ ");
        for(int i = 0; i < 2*elementos; i++){
          printf("%d ", *(array2 + i));
        }
        printf("]\n");
      }
    free(array2);
  }
  return 0;
}
