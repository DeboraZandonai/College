#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Hello World
int main(void)
{
    printf("Olá Mundo!\n");

    system('pause')

        return 0;
}

// Digite o número
int main()
{
    int n1, n2;
    printf("Digite o primeiro número:")
        scanf_s("%d", &n1)
            printf("Digite o segundo número:")
                scanf_s("%d", &n2)
                    printf("Os números digitados são: %d e %d\n", n1, n2)
                        system('pause') return 0;
}

// Dia da semana
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

// Média
int main()
{
    float nota1, nota2, media;

    printf("Digite a primeira nota:");
    scanf_s("%f", &nota1);
    printf("Digite a segunda nota:");
    scanf_s("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 7)
    {
        printf("APROVADO(A)!")
    }
    else
    {
        printf("REPROVADO(A)!")
    }

    printf("Media = %d", media)

        system('pause')

            return 0;
}

// Do-While
int a = 10;
do
{
    printf("O valor de a: %d\n", a)
        a = a + 1
} while (a <= 40);

int cont;
for (cont = 30; cont >= 1; cont--)
{
    printf("%d\n", cont)

        system('pause') return 0;
}

// Procedure
void soma()
{
    float resultado, A, B;
    printf("Abaixo a rotina da soma");
    printf("\n*** Digite o primeiro número:");

    scanf_s("%f", &A);
    printf("*** Digite o segundo número:");
    scanf_s("%f", &B);

    resultado = A + B;

    printf("\n A soma dos valores digitados é: %.2f\n", resultado);
    return
}
