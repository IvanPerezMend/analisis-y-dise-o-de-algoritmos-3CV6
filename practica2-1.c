#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <time.h>



int main (){
	
	////funcion para saber el tiempo de ejecucion 
	clock_t start, end;
    double cpu_time_used;

    start = clock();
    ///////////////////////////
	int i,mediana,pos,valor;
	float medianaP;
	
	int arr1[4]={1,2,3,4};
	int arr2[7]={5,6,7,8,9,10,11};

	//para saber el tamañoo de los arreglos
	int tamArr1=sizeof(arr1)/sizeof(arr1[0]);
	int tamArr2=sizeof(arr2)/sizeof(arr2[0]);
	
	printf("\nArreglo 1 original: "); //impresion de el primer arreglo 
	for(i=0; i<tamArr1; i++){
		printf("[ %d ]", arr1[i]);		
	}
	printf("\nArreglo 2 original: "); //impresion del segundo arreglo 
	for(i=0; i<tamArr2; i++){
		printf("[ %d ]", arr2[i]);		
	}printf("\n\n");
		
	int tamArrNuevo= tamArr1 + tamArr2;       //la suma de los dos arreglos 
	int nuevoArr[tamArrNuevo];                //se crea un nuevo arreglo del tamaño de ambos arreglos 
	
	for(i=0;i<tamArr1;i++){                //mueve el primer arrglo al nuevo arrglo 
        	nuevoArr[i]=arr1[i];	
	}
	for(i=0;i<tamArr2;i++){                //mueve el segundo arreglo al nuevo arreglo 
        	nuevoArr[tamArr1+i]=arr2[i];	
	}
	
	printf("arreglo fusionado: ");
	
	for(i=0; i<tamArrNuevo; i++){ //impresion del nuevo arreglo fusionado 
		printf("[ %d ]", nuevoArr[i]);		
	}
	
	
	if(tamArrNuevo %2==0){//calculo de la media si es "PAR"
		printf("\n\t\tES PAR");
		pos=tamArrNuevo/2;
		
		medianaP= ((float)nuevoArr[pos-1]+ nuevoArr[pos])/2;
		
		printf("\nla mediana es: %.2f", medianaP);
	}
	else{        //calculo de la media si es "IMPAR"
		
		printf("\n\t\tES IMPAR");
         pos=tamArrNuevo/2;
		mediana=nuevoArr[pos];
		printf("\nla mediana es: %d", mediana);
	}
	////////////////////////////////////////////////////
	
	 for (i = 0; i < 1000000; i++);  
    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\n\nTiempo de CPU usado: %f segundos\n", cpu_time_used);
	
	
return 0;	
}


