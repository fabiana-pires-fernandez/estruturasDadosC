#include <stdio.h>

typedef struct{
	char dia[1];
	char mes[3];
	char ano[1980];
} DATA;


void imprimir(DATA copia){
   printf("%s/%s/%s\n", copia.dia, copia.mes, copia.ano);
}

void main( ) {
	
	DATA data;
	
	printf("Entre com o dia: ");
	scanf("%s", data.dia);
	printf("\nEntre com o mes: ");
	scanf("%s", data.mes);
	printf("\nEntre com o ano: ");
	scanf("%s", data.ano);
	
	imprimir(data);
}