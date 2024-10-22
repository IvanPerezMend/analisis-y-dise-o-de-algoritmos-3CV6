#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <time.h>

void ordenar(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Intercambio de valores
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
			}
    }
	}


int main (){
	
	int i,pos,valor;
	
	int arr1[4]={1,2,4,4};
	int arr2[6]={5,6,3,9,5,11};
	int arr3[9]={4,7,8,9,1,35,25,5,11};

	//para saber el tamañoo de los arreglos
	int tamArr1=sizeof(arr1)/sizeof(arr1[0]);
	int tamArr2=sizeof(arr2)/sizeof(arr2[0]);
	int tamArr3=sizeof(arr3)/sizeof(arr3[0]);
	
	printf("\nArreglo 1 original: "); //impresion de el primer arreglo 
	for(i=0; i<tamArr1; i++){
		printf("[ %d ]", arr1[i]);		
	}
	printf("\nArreglo 2 original: "); //impresion del segundo arreglo 
	for(i=0; i<tamArr2; i++){
		printf("[ %d ]", arr2[i]);		
	}
	printf("\nArreglo 3 original: "); //impresion del segundo arreglo 
	for(i=0; i<tamArr3; i++){
		printf("[ %d ]", arr3[i]);		
	}printf("\n\n");
		
	int tamArrNuevo= tamArr1 + tamArr2 + tamArr3;       //la suma de los dos arreglos 
	int nuevoArr[tamArrNuevo];                          //se crea un nuevo arreglo del tamaño de ambos arreglos 
	
	for(i=0;i<tamArr1;i++){                               //mueve el primer arrglo al nuevo arrglo 
        	nuevoArr[i]=arr1[i];	
	}
	for(i=0;i<tamArr2;i++){                              //mueve el segundo arreglo al nuevo arreglo 
        	nuevoArr[tamArr1+i]=arr2[i];	
	}
	for(i=0;i<tamArr3;i++){                              //mueve el segundo arreglo al nuevo arreglo 
        	nuevoArr[tamArr1+tamArr2+i]=arr3[i];	
	}
	
	printf("arreglo fusionado: ");
	
	for(i=0; i<tamArrNuevo; i++){ //impresion del nuevo arreglo fusionado 
		printf("[ %d ]", nuevoArr[i]);		
	}
	
	ordenar(nuevoArr, tamArrNuevo);
	
	printf("arreglo ordenado: ");
	
	for(i=0; i<tamArrNuevo; i++){ //impresion del nuevo arreglo fusionado 
		printf("[ %d ]", nuevoArr[i]);		
	}

	
return 0;	
}



