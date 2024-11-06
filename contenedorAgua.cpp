#include <iostream>
#include <algorithm>

int maxArea(int height[], int n) {
    int izquierda = 0;
    int derecha = n - 1;
    int areaMax = 0;

    while (izquierda < derecha) {
        // Calcula el área
        int altura = std::min(height[izquierda], height[derecha]);
        int anchura = derecha - izquierda;
        int area = altura * anchura;

        // Actualiza el área máxima si encontramos una mayor
        areaMax = std::max(areaMax, area);

        // Mueve el puntero que apunta a la altura menor
        if (height[izquierda] < height[derecha]) {
            izquierda++;
        } else {
            derecha--;
        }
    }

    return areaMax;
}

int main() {
    int height[] = {1, 1};
    int n = sizeof(height) / sizeof(height[0]); // Calcula el tamaño del arreglo
    std::cout << "cantidad de agua maxima: " << maxArea(height, n) << std::endl;
    return 0;
}

