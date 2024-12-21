#include <stdio.h>

// Função para conversão de massa entre diferentes unidades
void converterMassa() {
    int opcaoOrigem, opcaoDestino;
    double valor, convertido;

    // Unidades disponíveis para conversão
    printf("Unidades de Massa disponíveis:\n");
    printf("1. Quilograma (kg)\n");
    printf("2. Grama (g)\n");
    printf("3. Tonelada (t)\n");
    printf("4. Miligrama (mg)\n");

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

    // Converte o valor para a unidade base (quilograma)
    switch (opcaoOrigem) {
        case 1: // Quilograma
            convertido = valor; // já está em quilogramas
            break;
        case 2: // Grama
            convertido = valor / 1000; // 1 kg = 1000 g
            break;
        case 3: // Tonelada
            convertido = valor * 1000; // 1 t = 1000 kg
            break;
        case 4: // Miligrama
            convertido = valor / 1e6; // 1 kg = 1.000.000 mg
            break;
        default:
            printf("Opção de origem inválida!\n");
            return;
    }

    // Converte da unidade base (quilograma) para a unidade de destino
    switch (opcaoDestino) {
        case 1: // Quilograma
            // Já está convertido, mantém o valor
            break;
        case 2: // Grama
            convertido *= 1000; // 1 kg = 1000 g
            break;
        case 3: // Tonelada
            convertido /= 1000; // 1 t = 1000 kg
            break;
        case 4: // Miligrama
            convertido *= 1e6; // 1 kg = 1.000.000 mg
            break;
        default:
            printf("Opção de destino inválida!\n");
            return;
    }

    // Exibe o resultado
    printf("O valor convertido é: %.2lf\n", convertido);
}

int main() {
    converterMassa();
    return 0;
}