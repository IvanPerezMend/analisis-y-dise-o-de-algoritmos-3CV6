#include <stdio.h>
#include <time.h>


// Función recursiva que calcula el enésimo número de Fibonacci
int fibonacci(int n) {
    if (n == 0) {
        return 0;  // Caso base: Fibonacci de 0 es 0
    } else if (n == 1) {
        return 1;  // Caso base: Fibonacci de 1 es 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);  // Recursión
    }
}

int main() {
    int n,i;
clock_t start, end;
    double cpu_time_used;

    start = clock();
    //while(1){
	
////////////////////////////////
    // Solicitar al usuario el número de Fibonacci que desea calcular
    printf("Introduce el numero para calcular el Fibonacci: ");
    scanf("%d", &n);

    // Llamamos a la función recursiva e imprimimos el resultado
    printf("Fibonacci de %d es: %d\n", n, fibonacci(n));
///////////////////////////////////////////

for (i = 0; i < 1000000; i++);
    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Tiempo de CPU usado: %f segundos\n", cpu_time_used); //}
    
    return 0;
}

