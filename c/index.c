#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Olá Mundo!\n");

    system('pause')

        return 0;
}

int main()
{

    int n1, n2;

    printf("Digite o primeiro número:")
        scanf_s("%d", &n1)
            printf("Digite o segundo número:")
                scanf_s("%d", &n2)
                    printf("Os números digitados são: %d e %d\n", n1, n2)

                        system('pause')

                            return 0;
}

int main()
{
    int option;

    printf("Digite um número entre 1 e 7:")
        scanf_s("%d", &option)

            switch (option)
    {
    case 1:
        printf("O dia escolhido foi Domingo.\n\n") break;
    case 2:
        printf("O dia escolhido foi Segunda-Feira.\n\n") break;
    case 3:
        printf("O dia escolhido foi Terça-Feira.\n\n") break;
    case 4:
        printf("O dia escolhido foi Quarta-Feira.\n\n") break;
    case 5:
        printf("O dia escolhido foi Quinta-Feira.\n\n") break;
    case 6:
        printf("O dia escolhido foi Sexta-Feira.\n\n") break;
    case 7:
        printf("O dia escolhido foi Sábado.\n\n") break;

    default:
        printf("Não existe dia da semana para este número!") break;
    }

    system('pause') return 0;
}