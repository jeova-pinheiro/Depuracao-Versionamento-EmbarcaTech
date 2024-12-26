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

// Funções de conversão de potência
double watts_para_quilowatts(double watts) {
    return watts / 1000.0;
}
double watts_para_cv(double watts) {
    return watts / 735.5;
}
double quilowatts_para_watts(double quilowatts) {
    return quilowatts * 1000.0;
}
double quilowatts_para_cv(double quilowatts) {
    return quilowatts * 1.35962;
}
double cv_para_watts(double cv) {
    return cv * 735.5;
}
double cv_para_quilowatts(double cv) {
    return cv / 1.35962;
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

void potencia() {
    int opcao;
    double valor, resultado;

    do {
        printf("\n=== Conversões de Potência ===\n");
        printf("[1] Watts para Quilowatts\n");
        printf("[2] Watts para Cavalos-vapor (cv)\n");
        printf("[3] Quilowatts para Watts\n");
        printf("[4] Quilowatts para Cavalos-vapor (cv)\n");
        printf("[5] Cavalos-vapor (cv) para Watts\n");
        printf("[6] Cavalos-vapor (cv) para Quilowatts\n");
        printf("[0] Voltar ao menu principal\n");
        printf("Escolha uma opção : ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 6) {
            printf("Digite o valor: ");
            scanf("%lf", &valor);
        }

        switch (opcao) {
            case 1:
                resultado = watts_para_quilowatts(valor);
                printf("%.2f watts = %.2f quilowatts\n", valor, resultado);
                break;
            case 2:
                resultado = watts_para_cv(valor);
                printf("%.2f watts = %.2f cavalos-vapor (cv)\n", valor, resultado);
                break;
            case 3:
                resultado = quilowatts_para_watts(valor);
                printf("%.2f quilowatts = %.2f watts\n", valor, resultado);
                break;
            case 4:
                resultado = quilowatts_para_cv(valor);
                printf("%.2f quilowatts = %.2f cavalos-vapor (cv)\n", valor, resultado);
                break;
            case 5:
                resultado = cv_para_watts(valor);
                printf("%.2f cavalos-vapor (cv) = %.2f watts\n", valor, resultado);
                break;
            case 6:
                resultado = cv_para_quilowatts(valor);
                printf("%.2f cavalos-vapor (cv) = %.2f quilowatts\n", valor, resultado);
                break;
            case 0:
                printf("Voltando ao menu principal...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 0);
}

int main()
{   
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
        printf("[9] Potência (Watts, Quilowatts, Cavalos-vapor)\n");
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
        case 9:
            potencia();
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
