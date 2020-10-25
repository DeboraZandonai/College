#include <stdio.h>
#include <locale.h>

float valor(char letra)
{ //função que considera o  primeiro valor char maiúsculo ou minúsculo inserido na matriz
  float r = 0;
  if (letra >= 65 && letra <= 90)
  { //código numérico atribuído a letras de a à z, sendo 65 = A e 90 = Z, usado estrutura de controle if para executar considerando o intervalo entre A e Z
    r = letra;
    r = r / 10; //divide-se por 10  em caso de maiúscula
  }
  else
  {
    r = letra * 2; //multiplica-se por 2 em caso de minúscula
  };
  return r;
};

int main()
{
  setlocale(LC_ALL, "Portuguese");    //comando para imprimir caracteres especiais
  char matrizprincipal[10][10] = {};  //Matriz declarada
  char vetor1[100] = {};              //vetor auxiliar para armazenar valor de índices da matriz principal
  int vetor2[100] = {};               //vetor para armazenar quantidade de repetições
  char matrizsecundaria[10][10] = {}; //Matriz secundária para armazenar valor de índices da matriz principal
  int c, l;

  printf("Insira o número de colunas da matriz a ser gerada, máximo 10 = ");
  scanf("%d", &c); //armazenado número de colunas
  while (c <= 0 || c > 10)
  { //while, comando de repetição para informar ao usuário que quantia de colunas determina da está incorreta, podendo sair do laço ao inserir valor aceitável

    printf("\nNúmero de colunas determinado inválido, digite de 1 a 10 = ");
    scanf("%d", &c); //armazenado novo valor de colunas
  };

  printf("Insira o número de linhas da matriz a ser gerada, máximo 10 = ");
  scanf("%d", &l);

  while (l <= 0 || l > 10)
  { //while, comando de repetição para informar ao usuário que quantia de linhas determinada está incorreta, podendo sair do laço ao inserir valor aceitável

    printf("Valor de linhas invalido, digite quantas linhas a matriz possui (valido até 10 colunas apenas):");
    scanf("%d", &l); //armazenado novo valor de linhas
  };
  for (int i1 = 0; i1 < l; i1++)
  { //laços for para percorrer indices da matrizprincipal

    for (int i2 = 0; i2 < c; i2++)
    {

      printf("Digite a letra para matriz [%d] [%d]= ", i2, i1);
      scanf("%s", &matrizprincipal[i1][i2]); //armazenada letra no índice específico por i1 e i2 da matriz principal
    };
  };

  for (int i1 = 0; i1 < l; i1++)
  { //laços for para percorrer indices da matriz principal

    for (int i2 = 0; i2 < c; i2++)
    {

      printf("\t|%c|", matrizprincipal[i1][i2]);
      vetor1[(i1 * c) + i2] = matrizprincipal[i1][i2];    //atribuido ao vetor1 os valores nos indices da matrizprincipal
      matrizsecundaria[i1][i2] = matrizprincipal[i1][i2]; //atribuido a matriz secundária os valores nos indices da matrizprincipal

      printf("\n"); //usado para dar espaço entre os índices da matriz e deixa-la em formato de tabela
    };

    for (int i1 = 0; i1 < l; i1++)
    { //laços for para percorrer indices de vetor2 e vetor1

      for (int i2 = 0; i2 < c; i2++)
      {

        for (int p = 0; p < l; p++)
        { //laços for para percorrer indices da matriz secundária

          for (int r = 0; r < c; r++)
          {

            if (matrizsecundaria[p][r] == vetor1[(i1 * c) + i2])
            {                             //bloco condicional que compara os índices da matriz secundária com os valor do vetor1 para ver quais letras se repetem
              vetor2[(i1 * c) + i2]++;    //incrementado valor de repetições em vetor inteiro vetor2
              matrizsecundaria[p][r] = 0; //matriz zerada para realizar nova comparação
            };
          };
        };
      };
    };
    printf("\n\tREPETIÇÕES\n");

    for (int i1 = 0; i1 < (l * c); i1++)
    { //laço para percorrer os indices dos vetores

      if (vetor2[i1] != 0)
      { //caso vetor2 for diferente de zero significa que a letra a ser impressa apareceu pelo menos uma vez na matriz
        printf("\nletra = %c repetições = %d ", vetor1[i1], vetor2[i1]);
      };
    };
    printf("\n\n\tFUNÇÃO\n");
    printf("Primeira letra da matriz= %c\n Resultado: %.2f\n", matrizprincipal[0][0], valor(matrizprincipal[0][0])); //impresso o valor da função comparativa de maiúsculos com minúsculos
  }
