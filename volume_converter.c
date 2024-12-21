#include <stdio.h>

// Função para conversão de volume
void converterVolume() {
    int opcao;
    double valor, convertido;

    printf("Selecione a conversão de volume desejada:\n");
    printf("1. Litro para Mililitro\n");
    printf("2. Mililitro para Litro\n");
    printf("3. Litro para Metro cúbico\n");
    printf("4. Metro cúbico para Litro\n");
    printf("Digite sua escolha (1-4): ");
    scanf("%d", &opcao);

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    switch (opcao) {
        case 1:
            convertido = valor * 1000;
            printf("%.2lf Litros equivalem a %.2lf Mililitros.\n", valor, convertido);
            break;
        case 2:
            convertido = valor / 1000;
            printf("%.2lf Mililitros equivalem a %.2lf Litros.\n", valor, convertido);
            break;
        case 3:
            convertido = valor / 1000;
            printf("%.2lf Litros equivalem a %.2lf Metros cúbicos.\n", valor, convertido);
            break;
        case 4:
            convertido = valor * 1000;
            printf("%.2lf Metros cúbicos equivalem a %.2lf Litros.\n", valor, convertido);
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
}

int main() {
    converterVolume();
    return 0;
}