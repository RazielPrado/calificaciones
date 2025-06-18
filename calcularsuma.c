#ifndef SUMA_H
#define SUMA_H

float calcularSuma(float calificaciones[], int n);

#endif // SUMA_H
#include "suma.h"

float calcularSuma(float calificaciones[], int n) {
    float suma = 0;
    for (int i = 0; i < n; i++) {
        suma += calificaciones[i];
    }
    return suma;
}