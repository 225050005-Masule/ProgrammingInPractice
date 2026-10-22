#include <stdio.h>

int main() {
    char municipality[50];
    char mayor[50];
    int population;
    
    printf("Municipality Financial Management System\n");
    printf("Enter name of Municipality: ");
    scanf("%49s", municipality);
    printf("Enter name of mayor: ");
    scanf("%49s", mayor);
    printf("Enter population: ");
    scanf("%d", &population);

    printf("\n------------------------------------------\n");
    printf("Municipality: %s\n", municipality);
    printf("Mayor: %s\n", mayor);
    printf("Population: %d\n", population);
    return 0;
}