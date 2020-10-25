#include <stdio.h>
#include <locale.h>
//3387418

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int n = 1, i;
  //declaração de inteiros para utilização em laços de repetição
  char products[8][60] = {//declaração de matriz para armazenar as strings
                          //produtos
                          " Itens | Produtos        | Código| Preço Unitário",
                          "     1 | Cachorro-Quente | 100    | 5,00 ",
                          "     2 | Chesse-Salada   | 101    | 8,79 ",
                          "     3 | Chesse-Bacon    | 102    | 9,99 ",
                          "     4 | Misto           | 103    | 6,89 ",
                          "     5 | Salada          | 104    | 4,80 ",
                          "     6 | Água            | 105    | 3,49 ",
                          "     7 | Refrigerante    | 106    | 4,99 "};
  int qtd01, qtd02, qtd03, qtd04, qtd05, qtd06, qtd07; //declaração de qtd01 para armazenar a quantidade do produto a ser atribuida pelo usuário
  float precototal = 0;                                //declaração de float preço total para armazenar preço total da compra

  for (i = 0; i < 8; i++) //laço "for" para imprimir os produtos, com incremento de
                          //i para percorrer 7x a matriz tabela imprimindo cada índice do 0 ao 6
    printf("%s\n", products[i]);

  while (n > 0 && n < 8)
  { //comando while de repetição para quando o número
    //escolhido pelo usuário estiver dentro do intervalo 1 - 7 ele realize as escolhas dos produtos
    printf("\n\nAtenção : caso informe um número fora da lista de itens a compra irá encerrar.\n");
    printf("Informe qual produto deseja seguindo a numeração do cardapio: ");
    scanf("%d", &n);

    switch (n) //comando de controle switch, dependendo escolha ele
               //retorna um case com base na variável "n"
    {
    case 1:
    {

      printf("Produto: %d \nInforme a quantida de: ", n);
      scanf("%d", &qtd01);
      precototal = precototal + (5 * qtd01); //somatória do preço total a ele mesmo + o preço do produto escolhido multiplicado pela quantidade escolhida break;
      //break encerrar o processo no case 1, para que assim não fique alternando entre os demais cases. case 2 :

      printf("Produto: %d \nInforme a quantida de: ", n);
      scanf("%d", &qtd02);
      precototal = precototal + (8.79 * qtd02);
      break;
    }
    case 3:
    {
      int qtd03;
      printf("Produto: %d \nInforme a quantida de: ", n);
      scanf("%d", &qtd03);
      precototal = precototal + (9.99 * qtd03);
      break;
    }
    case 4:
    {
      printf("Produto: %d \nInforme a quantida de: ", n);
      scanf("%d", &qtd04);
      precototal = precototal + (6.89 * qtd04);
      break;
    }
    case 5:
    {
      printf("Produto: %d \nInforme a quantida de: ", n);
      scanf("%d", &qtd05);
      precototal = precototal + (4.8 * qtd05);
      break;
    }
    case 6:
    {
      printf("Produto: %d \nInforme a quantida de: ", n);
      scanf("%d", &qtd06);
      precototal = precototal + (3.49 * qtd06);
      break;
    }
    case 7:
    {
      printf("Produto: %d \nInforme a quantida de: ", n);
      scanf("%d", &qtd07);
      precototal = precototal + (4.99 * qtd07);
      break;
    }
    default:
    {
      printf("\n\t\tValor Total: %.2f Reais \n", precototal); //impressão para o usuário do preço total para pagar, ou seja, preço acumulativo
      printf("*************************************************************************\n");
      //estruturas "se" if, para imprimir os produtos finais com base nas quantidades selecionadas pelo usuario, se a qtd for maior que zero imprima
      if (qtd01 > 0)
      {
        printf("\nQuantia: %d  Selecionado: %s ", qtd01,
               products[1]); //imprime o índice da matriz products de acordo com a quantidade declarada no case
      }
      if (qtd02 > 0)
      {
        printf("\nQuantia: %d  Selecionado: %s ", qtd02,
               products[2]);
      }
      if (qtd03 > 0)
      {
        printf("\nQuantia: %d  Selecionado: %s ", qtd03,
               products[3]);
      }
      if (qtd04 > 0)
      {
        printf("\nQuantia: %d  Selecionado: %s ", qtd04,
               products[4]);
      }
      if (qtd05 > 0)
      {
        printf("\nQuantia: %d  Selecionado: %s ", qtd05,
               products[5]);
      }
      if (qtd06 > 0)
      {
        printf("\nQuantia: %d  Selecionado: %s ", qtd06,
               products[6]);
      }
      if (qtd07 > 0)
      {
        printf("\nQuantia: %d  Selecionado: %s ", qtd07,
               products[7]);
      }
      printf("\n\n");
      break;
    }
    }
  }
}