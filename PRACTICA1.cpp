#include <iostream>
using namespace std;

void imp(int []); //funcion para imprimir

void imp(int nums[10]){
	int i;
    for ( i = 0; i < 10; i++) {
        cout << nums[i] << " ";
    }
    cout <<" ]\n";	
}


int main() {
    int i,j;
    int nums[] = {1,1,2,2,3,3,4,4,5,5};
    // Variable para almacenar el numero de elementos del arreglo 
    int nuevoTamano = 1;  // Comenzamos en 1 porque el primer elemento siempre es único
    int TamanoOriginal=sizeof (nums)/sizeof (nums[0]);// para saber el tamaño total del arreglo
    cout << "\t\tPRACTICA 1\n";
    
    cout << "Contenido del Arreglo Original:  nums=[ ";
    imp(nums);
    cout<<"K inicial= "<< TamanoOriginal;
    

    // para comparacion de los elementos y eliminar repetidos
    for ( i = 1; i < 10; i++) {
        bool repetido = false;
        
        // Verificar si el elemento ya está en la parte no repetida del arreglo
        for ( j = 0; j < nuevoTamano; j++) {
            if (nums[i] == nums[j]) {
                repetido = true;
                break;
            }
        }
        // Si no está repetido, lo movemos a la posición correcta
        if (!repetido) {
            nums[nuevoTamano] = nums[i];
            nuevoTamano++;
        }
    }

    cout << "\n\nContenido del Arreglo SIN REPETIDOS: nums=[ ";
    imp(nums);
    cout<<"K final= "<< nuevoTamano;

    return 0;
}
