#include <stdio.h>
#include <stdlib.h>


int main (){
  int *array;
  int num2;
  
  printf("¿Cuantos elementos tiene el conjunto?\n");
  scanf("%d", &num2);
  array = (int*)calloc(num2, sizeof(int));
  
  if (array!=NULL) {
    printf("[ ");
    for(int i = 0; i < num2; i++){
      printf("%d", *(array+i));
    }
    printf("]\n");
    free(array);
  }
  return 0;
}
