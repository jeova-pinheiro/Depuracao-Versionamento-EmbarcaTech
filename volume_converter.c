#include <stdio.h>

// Função para conversão de volume entre diferentes unidades
void converterVolume() {
    int opcaoOrigem, opcaoDestino;
    double valor, convertido;

    // Unidades disponíveis para conversão
    printf("Unidades de Volume disponíveis:\n");
    printf("1. Litro (L)\n");
    printf("2. Mililitro (mL)\n");
    printf("3. Metro cúbico (m³)\n");
    printf("4. Centímetro cúbico (cm³)\n");

    // Escolha da unidade de origem
    printf("Escolha a unidade de origem (1-4): ");
    scanf("%d", &opcaoOrigem);

    // Escolha da unidade de destino
    printf("Escolha a unidade de destino (1-4): ");
    scanf("%d", &opcaoDestino);

    // Entrada do valor a ser convertido
    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    // Conversão de valores
    if (opcaoOrigem == opcaoDestino) {
        printf("As unidades são iguais. O valor permanece o mesmo: %.2lf\n", valor);
        return;
    }

    // Converte o valor para a unidade base (litro)
    switch (opcaoOrigem) {
        case 1: // Litro
            convertido = valor; // já está em litros
            break;
        case 2: // Mililitro
            convertido = valor / 1000; // 1 L = 1000 mL
            break;
        case 3: // Metro cúbico
            convertido = valor * 1000; // 1 m³ = 1000 L
            break;
        case 4: // Centímetro cúbico
            convertido = valor / 1000; // 1 L = 1000 cm³
            break;
        default:
            printf("Opção de origem inválida!\n");
            return;
    }

    // Converte da unidade base (litro) para a unidade de destino
    switch (opcaoDestino) {
        case 1: // Litro
            // Já está convertido, mantém o valor
            break;
        case 2: // Mililitro
            convertido *= 1000; // 1 L = 1000 mL
            break;
        case 3: // Metro cúbico
            convertido /= 1000; // 1 m³ = 1000 L
            break;
        case 4: // Centímetro cúbico
            convertido *= 1000; // 1 L = 1000 cm³
            break;
        default:
            printf("Opção de destino inválida!\n");
            return;
    }

    // Exibe o resultado
    printf("O valor convertido é: %.2lf\n", convertido);
}

int main() {
    converterVolume();
    return 0;
}