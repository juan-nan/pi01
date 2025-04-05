#include <stdio.h>
#include <stdlib.h>

int main() {
int l=1000;
int c=1000;
int **matriz = (int **)malloc(l * sizeof(int *));

if (matriz == NULL) {
  printf("Erro alocacao\n");
  return 1;
}

for (int i = 0; i < l; i++) {
  matriz[i] = (int *)malloc(c * sizeof(int));
  if (matriz[i] == NULL) {
     printf("Erro alocação na linha\n");

     for (int j = 0; j < i; j++) {
       free(matriz[j]);
     }
free(matriz);
   return 1;
  }
}


for (int i = 0; i < l; i++) {
    for (int j = 0; j < c; j++) {
      matriz[i][j] = 1;
   }
}
 
for (int j = 0; j < l; j++) {
       free(matriz[j]);
     }
free(matriz);

return 0;
}
