#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");           //comando para imprimir caracteres especiais
  int capacidade, repeticao = 0, capMes = 0; //declarado variáveis inteiras para armazenarem respectivamente, capacidade do reservatório; repetição em while e for e capacidade do mês
  int chuva[1000];                           //array para conter a chuva do mês
  int gasto[1000];                           //array para conter o gasto no mês
  char mesesDoAno[12][50] = {" Jan", "Fev", "Mar", "Abr", "Mai", "Jun",
                             "Jul", "Ago", "Set", "Out", "Nov", "Dez"}; //matriz com meses do ano nos índices

  printf("Digite o maximo em milimetros que o reservatorio suporta= ");
  scanf_s("%d", &capacidade); //armazenado entrada da capacidade do reservatório
  for (repeticao = 0; repeticao < 12; repeticao++)
  { //laço for para percorrer os arrays de meses do ano e chuva por mês
    printf("\n Mês = %s \nQuanto de chuva ti vemos em milimetros? ",
           mesesDoAno[repeticao]);
    scanf("%d", &chuva[repeticao]); //armazenado o tanto de chuva no mês

    printf("Quanto foi gasto, em milimetros, do reservatorio? ");
    scanf("%d", &gasto[repeticao]); //armazenado a quantidae consumida no mês

    capMes += chuva[repeticao] - gasto[repeticao]; //atribuido de forma acumulativa a variável capMes a fórmula de cálculo da capacidade disponível no mês, subtraindo tanto de chuva que ocorreu no mês e consumido no mesmo

    if (capMes > 0 && capMes < capacidade)
    {                                                                               //caso a capacidade do mês não for nula e não ultrapasse a capacidade do reservatório
      printf("Quantidade armazenada final no mes , em milimetros = %d \n", capMes); //impressão de quantidade disponível ao final do mês
    }
    else if (capMes <= 0)
    { //caso a capacidade seja nula ou negativa
      printf("Reservatório vazio\n");
    }
    else
    { //último caso se aplica o caso de que a quantia ao fim do mês passou da capacidade total do reservatório
      printf("Reservatório cheio\n");
    }
  };

  printf("\n\tConsumo por mês \n\n");

  for (repeticao = 0; repeticao < 12; repeticao++)
  { //laço for para percorrer os índices dos meses do ano e gasto
    printf(" %s  consumido: %d milimetros  \n", mesesDoAno[repeticao],
           gasto[repeticao]);
  };
}
