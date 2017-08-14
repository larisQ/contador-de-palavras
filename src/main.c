/* EA879 - Contador de palavras
Larissa Quintela
RA:160343
 */

#include <stdio.h>

int main() {

  char c=1, last_c;
  int count = 1, flag = 0; //count = 1 - caso trivial de apenas uma palavra

  while (c != '\n') {
    scanf("%c", &c);
    if(c>=32 && c<=47){ //analisando se c é uma pontuação ou um espaço (utilizamos a tabela ASCII)
        flag=1; //flag setada - iniciamos a contagem de uma palavra
      }else if(((flag==1) && (c != '\n')) && (!((c>=48 && c<=57) && (last_c == '.' ||  last_c == ',')))){
        count++;  //a partir de um caracter seguido de uma letra ou número temos uma palavra
        flag = 0; //zeramos a flag para indificar novamente o começo de outra palavra
      }else{
        flag = 0; //caso necessário para não contarmos um float duas vezes
      }

    last_c = c; // salvando estado anterior

  }
  printf("%d\n", count); //printa a quantidade de palavras na frase
  return 0;
  }
