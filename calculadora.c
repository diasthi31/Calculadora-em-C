#include <stdio.h>
#include <stdlib.h>

int menuCalculadora() {
    int opcao;
    printf("Digite 1 para somar.\n");
    printf("Digite 2 para subtrair.\n");
    printf("Digite 3 para multiplicar.\n");
    printf("Digite 4 para dividir.\n");
    printf("Digite 0 para sair.\n");
    printf("--------------------------\n");
    printf("Sua opção -> ");
    scanf("%i", &opcao);
    printf("--------------------------\n");
    system("clear");
    return opcao;
}

void somar(double numero1, double numero2) {
    printf("Digite o primeiro número da soma: ");
    scanf("%lf", &numero1);
    printf("Digite o segundo número da soma: ");
    scanf("%lf", &numero2);
    printf("-------------------------------------\n");
    double soma = numero1 + numero2;
    printf("%.2lf + %.2lf = %.2lf\n", numero1, numero2, soma);
    printf("-------------------------------------\n");
}

void subtrair(double numero1, double numero2) {
    printf("Digite o primeiro número da subtração: ");
    scanf("%lf", &numero1);
    printf("Digite o segundo número da subtração: ");
    scanf("%lf", &numero2);
    printf("------------------------------------------\n");
    double subtracao = numero1 - numero2;
    printf("%.2lf - %.2lf = %.2lf\n", numero1, numero2, subtracao);
    printf("------------------------------------------\n");
}

void multiplicar(double numero1, double numero2) {
    printf("Digite o primeiro número da multiplicação: ");
    scanf("%lf", &numero1);
    printf("Digite o segundo número da multiplicação: ");
    scanf("%lf", &numero2);
    printf("-----------------------------------------------\n");
    double multiplicacao = numero1 * numero2;
    printf("%.2lf x %.2lf = %.2lf\n", numero1, numero2, multiplicacao);
    printf("-----------------------------------------------\n");
}

void dividir(double numero1, double numero2) {
    printf("Digite o primeiro número da divisão: ");
    scanf("%lf", &numero1);
    printf("Digite o segundo número da divisão: ");
    scanf("%lf", &numero2);
    printf("----------------------------------------\n");
    if (numero2 == 0) {
        printf("Erro: divisão por zero.\n");
    } else {
        double divisao = numero1 / numero2;
        printf("%.2lf / %.2lf = %.2lf\n", numero1, numero2, divisao);
    }
    printf("----------------------------------------\n");
}

int main() {
    int opcao;
    double numero1, numero2;

    do {
        opcao = menuCalculadora();
    
        switch(opcao) {
            case 1:
                somar(numero1, numero2);
                break;

            case 2:
                subtrair(numero1, numero2);
                break;

            case 3:
                multiplicar(numero1, numero2);
                break;

            case 4:
                dividir(numero1, numero2);
                break;
                
            case 0:
                printf("Programa encerrado.");
                break;

            default:
                printf("Opção iválida.\n");
                break;
            }
        } while (opcao != 0);

    return 0;
}