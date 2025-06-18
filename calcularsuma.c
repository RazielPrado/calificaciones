// Función que suma todas las calificaciones
float calcularSuma(float calificaciones[], int n) {
    float suma = 0;
    for (int i = 0; i < n; i++) {
        suma += calificaciones[i];
    }
    return suma;
}