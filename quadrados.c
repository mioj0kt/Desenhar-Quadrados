#include <stdio.h>

int main(void) {
  int linha, coluna, size;
  char model;
  printf("\tGerador de Quadrados.\n\n");
  printf("C para totalmente preenchido.\n");
  printf("B para apenas as bordas.\n");
  printf("P para bordas e diagonal principal.\n");
  printf("S para bordas e diagonal secundária.\n");
  printf("H para dividido horizontalmente.\n");
  printf("V para dividido verticalmente.\n\n");
  printf("Escolha o modelo: ");
  scanf("%c", &model);
  printf("\nEscolha o tamanho: ");
  scanf("%d", &size);
  switch (model) {
    // totalmente preenchido
  case 'C':
    for (linha = 0; linha < size; linha++) {
      for (coluna = 0; coluna < size; coluna++) {
        printf("*");
      }
      printf("\n");
    }
    break;
    // somente bordas
  case 'B':
    for (linha = 0; linha < size; linha++) {
      for (coluna = 0; coluna < size; coluna++) {
        if (linha == 0 || linha == size - 1 || coluna == 0 ||
            coluna == size - 1) {
          printf("*");
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }
    break;
    // diagonal principal
  case 'P':
    for (linha = 0; linha < size; linha++) {
      for (coluna = 0; coluna < size; coluna++) {
        if (linha == 0 || linha == size - 1 || coluna == 0 ||
            coluna == size - 1 || coluna == linha) {
          printf("*");
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }
    break;
  // diagonal secundária
  case 'S':
    for (linha = 0; linha < size; linha++) {
      for (coluna = 0; coluna < size; coluna++) {
        if (linha == 0 || linha == size - 1 || coluna == 0 ||
            coluna == size - 1 || linha == size - coluna - 1) {
          printf("*");
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }
    break;
  // divisão horizontal
  case 'H':
    for (linha = 0; linha < size; linha++) {
      for (coluna = 0; coluna < size; coluna++) {
        if (linha == 0 || linha == size - 1 || coluna == 0 ||
            coluna == size - 1 || linha == size / 2) {
          printf("*");
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }
    break;
  // divisão vertical
  case 'V':
    for (linha = 0; linha < size; linha++) {
      for (coluna = 0; coluna < size; coluna++) {
        if (linha == 0 || linha == size - 1 || coluna == 0 ||
            coluna == size - 1 || coluna == size / 2) {
          printf("*");
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }
    break;
  // mensagem de erro
  default:
    printf("\nNão existe essa opção.");
  }
  return 0;
}