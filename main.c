#include <stdio.h>

// Funções de conversão de comprimento
double metros_para_centimetros(double metros) {
    return metros * 100.0;
}
double metros_para_milimetros(double metros) {
    return metros * 1000.0;
}
double centimetros_para_metros(double centimetros) {
    return centimetros / 100.0;
}
double centimetros_para_milimetros(double centimetros) {
    return centimetros * 10.0;
}
double milimetros_para_metros(double milimetros) {
    return milimetros / 1000.0;
}
double milimetros_para_centimetros(double milimetros) {
    return milimetros / 10.0;
}

void comprimento() {
    int opcao;
    double valor, resultado;

    do {
        printf("\n=== Conversões de Comprimento ===\n");
        printf("[1] Metros para Centímetros\n");
        printf("[2] Metros para Milímetros\n");
        printf("[3] Centímetros para Metros\n");
        printf("[4] Centímetros para Milímetros\n");
        printf("[5] Milímetros para Metros\n");
        printf("[6] Milímetros para Centímetros\n");
        printf("[0] Voltar ao menu principal\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 6) {
            printf("Digite o valor: ");
            scanf("%lf", &valor);
        }

        switch (opcao) {
            case 1:
                resultado = metros_para_centimetros(valor);
                printf("%.2f metros = %.2f centímetros\n", valor, resultado);
                break;
            case 2:
                resultado = metros_para_milimetros(valor);
                printf("%.2f metros = %.2f milímetros\n", valor, resultado);
                break;
            case 3:
                resultado = centimetros_para_metros(valor);
                printf("%.2f centímetros = %.2f metros\n", valor, resultado);
                break;
            case 4:
                resultado = centimetros_para_milimetros(valor);
                printf("%.2f centímetros = %.2f milímetros\n", valor, resultado);
                break;
            case 5:
                resultado = milimetros_para_metros(valor);
                printf("%.2f milímetros = %.2f metros\n", valor, resultado);
                break;
            case 6:
                resultado = milimetros_para_centimetros(valor);
                printf("%.2f milímetros = %.2f centímetros\n", valor, resultado);
                break;
            case 0:
                printf("Voltando ao menu principal...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 0);
}

// Funções de conversão de massa
double quilograma_para_grama(double quilograma) {
    return quilograma * 1000.0;
}
double quilograma_para_tonelada(double quilograma) {
    return quilograma / 1000.0;
}
double quilograma_para_miligrama(double quilograma) {
    return quilograma * 1e6;
}
double grama_para_quilograma(double grama) {
    return grama / 1000.0;
}
double grama_para_tonelada(double grama) {
    return grama / 1e6;
}
double grama_para_miligrama(double grama) {
    return grama * 1000.0;
}
double tonelada_para_quilograma(double tonelada) {
    return tonelada * 1000.0;
}
double tonelada_para_grama(double tonelada) {
    return tonelada * 1e6;
}
double tonelada_para_miligrama(double tonelada) {
    return tonelada * 1e9;
}
double miligrama_para_quilograma(double miligrama) {
    return miligrama / 1e6;
}
double miligrama_para_grama(double miligrama) {
    return miligrama / 1000.0;
}
double miligrama_para_tonelada(double miligrama) {
    return miligrama / 1e9;
}

void massa() {
    int opcao;
    double valor, resultado;

    do {
        printf("\n=== Conversões de Massa ===\n");
        printf("[1] Quilograma para Grama\n");
        printf("[2] Quilograma para Tonelada\n");
        printf("[3] Quilograma para Miligrama\n");
        printf("[4] Grama para Quilograma\n");
        printf("[5] Grama para Tonelada\n");
        printf("[6] Grama para Miligrama\n");
        printf("[7] Tonelada para Quilograma\n");
        printf("[8] Tonelada para Grama\n");
        printf("[9] Tonelada para Miligrama\n");
        printf("[10] Miligrama para Quilograma\n");
        printf("[11] Miligrama para Grama\n");
        printf("[12] Miligrama para Tonelada\n");
        printf("[0] Voltar ao menu principal\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 12) {
            printf("Digite o valor: ");
            scanf("%lf", &valor);
        }

        switch (opcao) {
            case 1:
                resultado = quilograma_para_grama(valor);
                printf("%.2f quilogramas = %.2f gramas\n", valor, resultado);
                break;
            case 2:
                resultado = quilograma_para_tonelada(valor);
                printf("%.2f quilogramas = %.2f toneladas\n", valor, resultado);
                break;
            case 3:
                resultado = quilograma_para_miligrama(valor);
                printf("%.2f quilogramas = %.2f miligramas\n", valor, resultado);
                break;
            case 4:
                resultado = grama_para_quilograma(valor);
                printf("%.2f gramas = %.2f quilogramas\n", valor, resultado);
                break;
            case 5:
                resultado = grama_para_tonelada(valor);
                printf("%.2f gramas = %.2f toneladas\n", valor, resultado);
                break;
            case 6:
                resultado = grama_para_miligrama(valor);
                printf("%.2f gramas = %.2f miligramas\n", valor, resultado);
                break;
            case 7:
                resultado = tonelada_para_quilograma(valor);
                printf("%.2f toneladas = %.2f quilogramas\n", valor, resultado);
                break;
            case 8:
                resultado = tonelada_para_grama(valor);
                printf("%.2f toneladas = %.2f gramas\n", valor, resultado);
                break;
            case 9:
                resultado = tonelada_para_miligrama(valor);
                printf("%.2f toneladas = %.2f miligramas\n", valor, resultado);
                break;
            case 10:
                resultado = miligrama_para_quilograma(valor);
                printf("%.2f miligramas = %.2f quilogramas\n", valor, resultado);
                break;
            case 11:
                resultado = miligrama_para_grama(valor);
                printf("%.2f miligramas = %.2f gramas\n", valor, resultado);
                break;
            case 12:
                resultado = miligrama_para_tonelada(valor);
                printf("%.2f miligramas = %.2f toneladas\n", valor, resultado);
                break;
            case 0:
                printf("Voltando ao menu principal...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 0);
}

// Funções de conversão de volume
double litro_para_mililitro(double litro) {
    return litro * 1000.0;
}
double litro_para_metro_cubico(double litro) {
    return litro / 1000.0;
}
double litro_para_centimetro_cubico(double litro) {
    return litro * 1000.0;
}
double mililitro_para_litro(double mililitro) {
    return mililitro / 1000.0;
}
double mililitro_para_metro_cubico(double mililitro) {
    return mililitro / 1e6;
}
double mililitro_para_centimetro_cubico(double mililitro) {
    return mililitro;
}
double metro_cubico_para_litro(double metro_cubico) {
    return metro_cubico * 1000.0;
}
double metro_cubico_para_mililitro(double metro_cubico) {
    return metro_cubico * 1e6;
}
double metro_cubico_para_centimetro_cubico(double metro_cubico) {
    return metro_cubico * 1e6;
}
double centimetro_cubico_para_litro(double centimetro_cubico) {
    return centimetro_cubico / 1000.0;
}
double centimetro_cubico_para_mililitro(double centimetro_cubico) {
    return centimetro_cubico;
}
double centimetro_cubico_para_metro_cubico(double centimetro_cubico) {
    return centimetro_cubico / 1e6;
}

void volume() {
    int opcao;
    double valor, resultado;

    do {
        printf("\n=== Conversões de Volume ===\n");
        printf("[1] Litro para Mililitro\n");
        printf("[2] Litro para Metro cúbico\n");
        printf("[3] Litro para Centímetro cúbico\n");
        printf("[4] Mililitro para Litro\n");
        printf("[5] Mililitro para Metro cúbico\n");
        printf("[6] Mililitro para Centímetro cúbico\n");
        printf("[7] Metro cúbico para Litro\n");
        printf("[8] Metro cúbico para Mililitro\n");
        printf("[9] Metro cúbico para Centímetro cúbico\n");
        printf("[10] Centímetro cúbico para Litro\n");
        printf("[11] Centímetro cúbico para Mililitro\n");
        printf("[12] Centímetro cúbico para Metro cúbico\n");
        printf("[0] Voltar ao menu principal\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 12) {
            printf("Digite o valor: ");
            scanf("%lf", &valor);
        }

        switch (opcao) {
            case 1:
                resultado = litro_para_mililitro(valor);
                printf("%.2f litros = %.2f mililitros\n", valor, resultado);
                break;
            case 2:
                resultado = litro_para_metro_cubico(valor);
                printf("%.2f litros = %.2f metros cúbicos\n", valor, resultado);
                break;
            case 3:
                resultado = litro_para_centimetro_cubico(valor);
                printf("%.2f litros = %.2f centímetros cúbicos\n", valor, resultado);
                break;
            case 4:
                resultado = mililitro_para_litro(valor);
                printf("%.2f mililitros = %.2f litros\n", valor, resultado);
                break;
            case 5:
                resultado = mililitro_para_metro_cubico(valor);
                printf("%.2f mililitros = %.2f metros cúbicos\n", valor, resultado);
                break;
            case 6:
                resultado = mililitro_para_centimetro_cubico(valor);
                printf("%.2f mililitros = %.2f centímetros cúbicos\n", valor, resultado);
                break;
            case 7:
                resultado = metro_cubico_para_litro(valor);
                printf("%.2f metros cúbicos = %.2f litros\n", valor, resultado);
                break;
            case 8:
                resultado = metro_cubico_para_mililitro(valor);
                printf("%.2f metros cúbicos = %.2f mililitros\n", valor, resultado);
                break;
            case 9:
                resultado = metro_cubico_para_centimetro_cubico(valor);
                printf("%.2f metros cúbicos = %.2f centímetros cúbicos\n", valor, resultado);
                break;
            case 10:
                resultado = centimetro_cubico_para_litro(valor);
                printf("%.2f centímetros cúbicos = %.2f litros\n", valor, resultado);
                break;
            case 11:
                resultado = centimetro_cubico_para_mililitro(valor);
                printf("%.2f centímetros cúbicos = %.2f mililitros\n", valor, resultado);
                break;
            case 12:
                resultado = centimetro_cubico_para_metro_cubico(valor);
                printf("%.2f centímetros cúbicos = %.2f metros cúbicos\n", valor, resultado);
                break;
            case 0:
                printf("Voltando ao menu principal...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 0);
}

void temperatura() {
    printf("=== Conversões de Temperatura ===\n");
    // Implementar as opções de conversão de temperatura aqui
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