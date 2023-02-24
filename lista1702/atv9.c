#include <stdio.h>

int main() {
   float matriz[3][3];
   int i, j;
   
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         matriz[i][j] = i*10 + j;
      }
   }
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         printf("Endereco da posicao [%d][%d]: %p\n", i, j, &matriz[i][j]);
      }
   }
   return 0;
}
