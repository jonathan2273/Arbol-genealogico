#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int x=0;
    do
    {
        printf("\n ELIGUE LA OPCION QUE QUIERAS PARA SABER EL NOMBRE DE ALGUN FAMILIAR TUYO: \n");
        printf("\n 1- BISABUELOS ");
        printf("\n 2- ABUELOS PATERNOS Y MATERNO ");
        printf("\n 3- PADRE Y TUS TIOS/AS ");
        printf("\n 4- MAMA Y TUS TIOS/AS ");
        printf("\n 5- HERMANAS ");
        printf("\n 6- PRIMOS ");
        printf("\n 7- SALIR FIN DEL PROGRAMA \n");
        printf("\n OPCION ELEGIDA: ");
        scanf("%d",&x);
		system("cls");
        switch(x)
        {
            case 1:
            	printf("\n\n");
                printf("\n\t\t **BISABUELOS MATERNOS ** \t\t");
                printf("\n Samuel Nava Elizalde y Nieves Vazquez Maldonado \n");
                printf("\n\n");
                break;

            case 2:
                printf("\n\n");
				printf("\n\t\t **ABUELOS PATERNOS** \t\t");
                printf("\n HERMINIA HERNADE RUIS y JOEL CORTES RUIZ o \n");
                printf("\n\t\t **ABUELOS MATERNOS** \t\t");
                printf("\n Maria del Carmen Nava Vazquez \n");
                printf("\n\n");
                break;

            case 3:
                printf("\n\n");
                printf("\n\t\t **PADRE** \t\t");
                printf("\n  CORTES RUIZ JOEL \n ");
                printf("\n\t\t **TIOS/AS** \t\t");
                printf("\n \n");
                printf("\n Fernado cortes ruiz\n");
                break;

            case 4:
                printf("\n\n");
                printf("\n\t\t **MADRE ** \t\t");
                printf("\n YOLANDA RIVERA VELARDE \n");
                printf("\n\t\t **TIOS/AS** \t\t");
                printf("\n ALEJANDRO RIVERA VELARDE\n");
                printf("\n\n");
                break;

            case 5:
            	printf("\n\n");
            	printf("\n\t\t **HERMANAS** \t\t");
                printf("\n CORTES RIVERA ANA KAREN \n");
                printf("\n CORTES RIVERA CESAR ALEJANDRO \n");
                 printf("\n CORTES RIVERA DAVID\n");
                printf("\n\n");
                break;

            case 6:
            	printf("\n\n");
            	printf("\n\t\t **PRIMOS/AS** \t\t");
                printf("\n ALEJANDRO RIVERA CORREA\n");
                printf("\n OMAR LOZANO RIVERA \n");
                printf("\n GUSTAVO LOZANO RIVERA\n");
                printf("\n ADRIAN RODRIGUEZ RIVERA \n");
                printf("\n CRISTIAN RIVERA JAVIER\n");
                printf("\n ALBERTO RIVERA CORREA\n");
                printf("\n LEONARDO RODRIGUEZ RIVERA \n");
                printf("\n\n");
                break;
                default:
                printf("Fin del Programa \n");
                printf("\n\n");
        }
    }while(x<=6&&x>0);
    return 0;
}
