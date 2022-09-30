#include <stdio.h>
#include <stdlib.h>

long size = 0;
long sizeFile(char *name);
void check(char *nameFile, char *command);

int main(int argc, int *argv[]){
	
	puts("\n|----------------------------------------|");
	puts("|----Creado por Daniel Andino Camacho----|");
	puts("|----Correo hellotecnologic@gmail.com----|");
	puts("|----------------------------------------|");
	puts("|----Este programa ejecuta un comando----|");
	puts("|----o varios al realizar cambios en ----|");
	puts("|----un archivo.-------------------------|");
	puts("|----------------------------------------|\n");
	
	if(argc < 3 || argc > 3) {
		printf("El programa recibe dos parametros <nombre de archivo> <'comandos a ejecutar'> ejemplo ./program file.txt clear");
		return 1;
	}
	
	check((char*)argv[1],(char*)argv[2]);
	
	return 0;
}

void check(char *nameFile, char *command){

	while(sizeFile(nameFile) == size);
	
	printf("\nEl archivo: %s cambio su contenido!\n",nameFile);
	
	system(command);
	
	size = 0;
	
	check(nameFile, command);
	
}

long sizeFile(char *name){

	FILE *f = fopen(name,"r");
	
	if(!f) {
		printf("Error no se pudo abrir el archivo o no existe!");
		exit(1);
	}

	long int i = 0;
	
	while(fgetc(f) != EOF) i = i + 1;
	
	fclose(f);
	
	if(size == 0) size = i;
	
	return i;
	
}