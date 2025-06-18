#include <stdio.h>
#include <stdlib.h>
#include "suma.h"

int main() {
    int numCalificaciones;
    float *calificaciones = NULL;

    printf("¿Cuántas calificaciones vas a ingresar? ");
    scanf("%d", &numCalificaciones);

    if (numCalificaciones <= 0) {
        printf("El número debe ser mayor que 0.\n");
        return 1;
    }

    // Reservar memoria para las calificaciones
    calificaciones = (float *) malloc(numCalificaciones * sizeof(float));
    if (calificaciones == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    for (int i = 0; i < numCalificaciones; i++) {
        printf("Introduce la calificación #%d: ", i + 1);
        scanf("%f", &calificaciones[i]);

        if (calificaciones[i] < 0 || calificaciones[i] > 10) {
            printf("Calificación inválida. Debe estar entre 0 y 10.\n");
            i--; // repetir esta calificación
        }
    }

    float suma = calcularSuma(calificaciones, numCalificaciones);
    float promedio = suma / numCalificaciones;

    printf("\nEl promedio es: %.2f\n", promedio);
    if (promedio >= 6.0) {
        printf("¡El alumno pasó!\n");
    } else {
        printf("El alumno no pasó.\n");
    }

    free(calificaciones);
    return 0;
}
