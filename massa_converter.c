#include <stdio.h>

// Função para conversão de massa
void converterMassa() {
    int opcao;
    double valor, convertido;

    printf("Selecione a conversão de massa desejada:\n");
    printf("1. Quilograma para Grama\n");
    printf("2. Grama para Quilograma\n");
    printf("3. Quilograma para Tonelada\n");
    printf("4. Tonelada para Quilograma\n");
    printf("5. Grama para Tonelada\n");
    printf("6. Tonelada para Grama\n");
    printf("Digite sua escolha (1-6): ");
    scanf("%d", &opcao);

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    switch (opcao) {
        case 1:
            convertido = valor * 1000;
            printf("%.2lf Quilogramas equivalem a %.2lf Gramas.\n", valor, convertido);
            break;
        case 2:
            convertido = valor / 1000;
            printf("%.2lf Gramas equivalem a %.2lf Quilogramas.\n", valor, convertido);
            break;
        case 3:
            convertido = valor / 1000;
            printf("%.2lf Quilogramas equivalem a %.2lf Toneladas.\n", valor, convertido);
            break;
        case 4:
            convertido = valor * 1000;
            printf("%.2lf Toneladas equivalem a %.2lf Quilogramas.\n", valor, convertido);
            break;
        case 5:
            convertido = valor / 1e6;
            printf("%.2lf Gramas equivalem a %.2lf Toneladas.\n", valor, convertido);
            break;
        case 6:
            convertido = valor * 1e6;
            printf("%.2lf Toneladas equivalem a %.2lf Gramas.\n", valor, convertido);
            break;
        default:
            printf("Opção inválida!\n");
    }
}

int main() {
    converterMassa();
    return 0;
}
