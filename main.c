#include <stdio.h>


void comprimento() {
    printf("=== Conversões de Comprimento ===\n");
    // Implementar as opções de conversão de comprimento aqui
}


void temperatura() {
    printf("=== Conversões de Temperatura ===\n");
    // Implementar as opções de conversão de temperatura aqui
}

void massa() {
    printf("=== Conversões de Massa ===\n");
    // Implementar as opções de conversão de massa aqui
}

void volume() {
    printf("=== Conversões de Volume ===\n");
    // Implementar as opções de conversão de volume aqui
}

void tempo() {
    printf("=== Conversões de Tempo ===\n");
    // Implementar as opções de conversão de tempo aqui
}

void velocidade() {
    printf("=== Conversões de Velocidade ===\n");
    // Implementar as opções de conversão de velocidade aqui
}

void dados() {
    printf("=== Conversões de Dados ===\n");
    // Implementar as opções de conversão de dados aqui
}

int main() {
    int opcao;

    do {
        printf("\n===== Menu de Conversões =====\n");
        printf("[1] Comprimento\n");
        printf("[2] Temperatura\n");
        printf("[3] Massa\n");
        printf("[4] Volume\n");
        printf("[5] Tempo\n");
        printf("[6] Velocidade\n");
        printf("[7] Dados (Bits, Bytes, KB, MB, GB, TB)\n");
        printf("[0] Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                comprimento();
                break;
            case 2:
                temperatura();
                break;
            case 3:
                massa();
                break;
            case 4:
                volume();
                break;
            case 5:
                tempo();
                break;
            case 6:
                velocidade();
                break;
            case 7:
                dados();
                break;
            case 0:
                printf("Saindo do programa. Até mais!\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
