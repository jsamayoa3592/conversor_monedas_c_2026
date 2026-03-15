#include <stdio.h>

int main() {
    int opcion;
    float cantidad;
    
    // Tipos de cambio aproximados (puedes cambiarlos)
    float gtq_usd = 7.80;
    float gtq_eur = 8.50;

    printf("=== Conversor de Monedas ===\n");
    printf("1. Quetzales a Dolares\n");
    printf("2. Quetzales a Euros\n");
    printf("3. Dolares a Quetzales\n");
    printf("4. Euros a Quetzales\n");
    printf("5. Dolares a Euros\n");
    printf("6. Euros a Dolares\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad: ");
    scanf("%f", &cantidad);

    switch(opcion) {
        case 1:
            printf("Resultado: %.2f USD\n", cantidad / gtq_usd);
            break;
        case 2:
            printf("Resultado: %.2f EUR\n", cantidad / gtq_eur);
            break;
        case 3:
            printf("Resultado: %.2f GTQ\n", cantidad * gtq_usd);
            break;
        case 4:
            printf("Resultado: %.2f GTQ\n", cantidad * gtq_eur);
            break;
        case 5:
            printf("Resultado: %.2f EUR\n", cantidad * (gtq_usd / gtq_eur));
            break;
        case 6:
            printf("Resultado: %.2f USD\n", cantidad * (gtq_eur / gtq_usd));
            break;
        default:
            printf("Opcion no valida.\n");
    }

    return 0;
}