#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
//funciones
int fmen();
void fdat();
void fimp();
//variables globales
FILE *fic;
char car;
char nom [20];
int eda;
float sue;
//programa principal
main()
{
	int opc;
	//instrucciones
	do
	{
		system("cls");
		opc=fmen();
		switch(opc)
		{
			case 1:
				fdat();
			break;
			case 2:
				fimp();
			break;
		}
		getch();
	}while(opc!=3);
}
int fmen()
{
	int opc1;
	printf("\t\t\tMENU\n");
	printf("\t\t\t====\n");
	printf("1.DATOS\n");
	printf("2.IMPRIMIR\n");
	printf("3.SALIR\n");
	printf("ELIJA UNA OPCION: ");
	scanf("%d", &opc1);
	return (opc1);
}
//funcion leer datos
void fdat()
{
	if((fic=fopen("B:/ALEXDER/SOFTWARE/PROYECTOS/DOCUMENTOS/per.txt", "a"))==NULL)
		printf("EL ARCHIVO NO SE PUEDE ABRIR");
	else
	{
		printf("NOMBRE: ");
		scanf("%s", nom);
		printf("EDAD: ");
		scanf("%d", &eda);
		printf("SUELDO: ");
		scanf("%f", &sue);
		//guardar datos en fichero
		fprintf(fic, "%s %d %1.2f\n", nom, eda, sue);
		printf("ARCHIVO GUARDADO CON EXITO");
		fclose(fic);
	}
	return;
}
//funcion imprimr datos
void fimp()
{
	if((fic=fopen("B:/ALEXDER/SOFTWARE/PROYECTOS/DOCUMENTOS/per.txt", "r"))==NULL)
		printf("EL ARCHIVO NO SE PUEDE ABRIR");
	else
	{
		printf("NOMBRE\tEDAD\tSUELDO\n");
		do
		{
			fscanf(fic, "%s %d %f", nom, &eda, &sue);
			printf("%s %d %1.2f\n", nom, eda, sue);
		}while(!feof(fic));
		fclose(fic);
	}
	return;
}
