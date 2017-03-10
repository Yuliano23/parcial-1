#include <stdio.h>
#include <stdlib.h>

void valores();
void imprimir ();
void mtranspuesta ();

int file, columna, **matriz;

int main(){
	valores();
	imprimir();
	mtranspuesta ();
	free(matriz);
	return 0;
}

void valores(){

    printf("\tMATRIZ TRANSPUESTA\n\n");
	printf("digite la cantidad de filas: "); scanf("%d", &file);
	printf("digite la cantidad de columnas: "); scanf("%d", &columna);

	matriz=(int**)malloc(file*sizeof(int*));
	for(int i=0; i<columna; i++){
		matriz[i]=(int*)malloc(columna*sizeof(int));
	}
	if(matriz==NULL){
		printf("Error al reservar memoria. \n");
		exit (1);
	}else{
		printf("\n\n");
		for(int f =0; f<file; f++){
			for(int c=0; c<columna; c++){
				printf("ingrese dato posicion (%d, %d): ", f, c);
				scanf("%d", &(*(*(matriz+c)+f))); }
		}
	}
}
void imprimir(){
    printf("\n\nMatriz ingresada: \n");
	for(int f =0; f<file; f++){
		for(int c=0; c<columna; c++){
			printf(" %d ",*(*(matriz+c)+f)); }
        printf("\n"); }
}
void mtranspuesta (){
    printf("\nMatriz transpuesta: \n");
    for(int f =0; f<file; f++){
		for(int c=0; c<columna; c++){
			printf(" %d ", *(*(matriz+f)+c)); }
        printf("\n"); }
}
