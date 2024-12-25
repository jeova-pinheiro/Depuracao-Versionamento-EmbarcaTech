#include <stdio.h>
#include <locale.h>

// Funções de conversão de comprimento
double metros_para_centimetros(double metros)
{
    return metros * 100.0;
}
double metros_para_milimetros(double metros)
{
    return metros * 1000.0;
}
double centimetros_para_metros(double centimetros)
{
    return centimetros / 100.0;
}
double centimetros_para_milimetros(double centimetros)
{
    return centimetros * 10.0;
}
double milimetros_para_metros(double milimetros)
{
    return milimetros / 1000.0;
}

double milimetros_para_centimetros(double milimetros)
{
    return milimetros / 10.0;
}

double celsius_para_fahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

double celsius_para_kelvin(double celsius) {
    return celsius + 273.15;
}

double fahrenheit_para_celsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

double fahrenheit_para_kelvin(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0 + 273.15;
}

double kelvin_para_celsius(double kelvin) {
    return kelvin - 273.15;
}

double kelvin_para_fahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9.0 / 5.0 + 32.0;
}

void comprimento()
{
    int opcao;
    double valor, resultado;

    do
    {
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

        if (opcao >= 1 && opcao <= 6)
        {
            printf("Digite o valor: ");
            scanf("%lf", &valor);
        }

        switch (opcao)
        {
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

void temperatura()
{
    int opcao;
    double valor, resultado;

    do {
        printf("\n=== Conversões de Temperatura ===\n");
        printf("[1] Celsius para Fahrenheit\n");
        printf("[2] Celsius para Kelvin\n");
        printf("[3] Fahrenheit para Celsius\n");
        printf("[4] Fahrenheit para Kelvin\n");
        printf("[5] Kelvin para Celsius\n");
        printf("[6] Kelvin para Fahrenheit\n");
        printf("[0] Voltar ao menu principal\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 6) {
            printf("Digite o valor: ");
            scanf("%lf", &valor);
        }

        switch (opcao) {
            case 1:
                resultado = celsius_para_fahrenheit(valor);
                printf("%.2f Celsius = %.2f Fahrenheit\n", valor, resultado);
                break;
            case 2:
                resultado = celsius_para_kelvin(valor);
                printf("%.2f Celsius = %.2f Kelvin\n", valor, resultado);
                break;
            case 3:
                resultado = fahrenheit_para_celsius(valor);
                printf("%.2f Fahrenheit = %.2f Celsius\n", valor, resultado);
                break;
            case 4:
                resultado = fahrenheit_para_kelvin(valor);
                printf("%.2f Fahrenheit = %.2f Kelvin\n", valor, resultado);
                break;
            case 5:
                resultado = kelvin_para_celsius(valor);
                printf("%.2f Kelvin = %.2f Celsius\n", valor, resultado);
                break;
            case 6:
                resultado = kelvin_para_fahrenheit(valor);
                printf("%.2f Kelvin = %.2f Fahrenheit\n", valor, resultado);
                break;
            case 0:
                printf("Voltando ao menu principal...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 0);
}

void massa()
{
    printf("=== Conversões de Massa ===\n");
    // Implementar as opções de conversão de massa aqui
}

void volume()
{
    printf("=== Conversões de Volume ===\n");
    // Implementar as opções de conversão de volume aqui
}

void tempo()
{
    printf("=== Conversões de Tempo ===\n");
    // Implementar as opções de conversão de tempo aqui
}

void velocidade()
{
    int opcao;
    double valor, resultado;

    do
    {
        printf("\n=== Conversões de Velocidade ===\n");
        printf("[1] Km/h para m/s\n");
        printf("[2] Km/h para mph\n");
        printf("[3] m/s para Km/h\n");
        printf("[4] m/s para mph\n");
        printf("[5] mph para Km/h\n");
        printf("[6] mph para m/s\n");
        printf("[0] Voltar ao menu principal\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 6)
        {
            printf("Digite o valor: ");
            scanf("%lf", &valor);
        }

        switch (opcao)
        {
        case 1:
            resultado = valor / 3.6; // Km/h para m/s
            printf("%.2f Km/h = %.2f m/s\n", valor, resultado);
            break;
        case 2:
            resultado = valor / 1.609; // Km/h para mph
            printf("%.2f Km/h = %.2f mph\n", valor, resultado);
            break;
        case 3:
            resultado = valor * 3.6; // m/s para Km/h
            printf("%.2f m/s = %.2f Km/h\n", valor, resultado);
            break;
        case 4:
            resultado = (valor * 3.6) / 1.609; // m/s para mph
            printf("%.2f m/s = %.2f mph\n", valor, resultado);
            break;
        case 5:
            resultado = valor * 1.609; // mph para Km/h
            printf("%.2f mph = %.2f Km/h\n", valor, resultado);
            break;
        case 6:
            resultado = (valor * 1.609) / 3.6; // mph para m/s
            printf("%.2f mph = %.2f m/s\n", valor, resultado);
            break;
        case 0:
            printf("Voltando ao menu principal...\n");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 0);
}

void area()
{
    int opcao;
    double valor, resultado;

    do
    {
        printf("\n=== Conversões de Área ===\n");
        printf("[1] Metros quadrados para Centímetros quadrados\n");
        printf("[2] Centímetros quadrados para Metros quadrados\n");
        printf("[0] Voltar ao menu principal\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 2)
        {
            printf("Digite o valor: ");
            scanf("%lf", &valor);
        }

        switch (opcao)
        {
        case 1:
            resultado = valor * 10000; // Metros quadrados para Centímetros quadrados
            printf("%.2f m² = %.2f cm²\n", valor, resultado);
            break;
        case 2:
            resultado = valor / 10000; // Centímetros quadrados para Metros quadrados
            printf("%.2f cm² = %.2f m²\n", valor, resultado);
            break;
        case 0:
            printf("Voltando ao menu principal...\n");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 0);
}

void dados()
{
    printf("=== Conversões de Dados ===\n");
    // Implementar as opções de conversão de dados aqui
}

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8"); // Configura para Português do Brasil com UTF-8

    printf("Este é um texto com acentos: á, é, í, ó, ú, ç.\n");
    printf("Exemplo com símbolo quadrado: m².\n");
    
    int opcao;

    do
    {
        printf("\n===== Menu de Conversões =====\n");
        printf("[1] Comprimento\n");
        printf("[2] Temperatura\n");
        printf("[3] Massa\n");
        printf("[4] Volume\n");
        printf("[5] Velocidade\n");
        printf("[6] Area\n");
        printf("[7] Tempo\n");
        printf("[8] Dados (Bits, Bytes, KB, MB, GB, TB)\n");
        printf("[0] Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
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
            velocidade();
            break;
        case 6:
            area();
            break;
        case 7:
            tempo();
            break;
        case 8:
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
