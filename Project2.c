#include <stdio.h>
#include <stdlib.h> 
int n1;
int n2;
int suma;
int resta;
int multiplicacion;
int division;
int opcion;

int main()
{

    do{
        printf("Ingrese el primer numero: ");
        scanf("%d", &n1);
        printf("Ingrese el segundo numero: ");
        scanf("%d", &n2);
    
        printf("Que operacion desea realizar? \n");
        printf("1. Suma \n");
        printf("2. Resta \n");  
        printf("3. Multiplicacion \n");
        printf("4. Division \n");
    
    
        scanf("%d", &opcion);
            if (opcion < 1 || opcion > 4)
            {
            printf("Opcion no valida \n");
            return 0;
            }
    }while (opcion < 1 || opcion > 4);  
    
    switch (opcion)
    {
        case 1:
            suma = n1 + n2;
            printf("La suma es: %d \n", suma);
            system("pause");
            break;
        case 2:
            resta = n1 - n2;
            printf("La resta es : %d \n", resta);
            system("pause");
            break;
        case 3:
            multiplicacion = n1 * n2;
            printf("La multiplicacion es: %d \n", multiplicacion);
            system("pause");
            break;
        case 4:
            if (n2 == 0)
            {
                printf("No se puede dividir por cero \n");
                system("pause");
                break;
            }
            else
            {
                division = n1 / n2;
                printf("La divsion es: %d \n", division);
                system("pause");
                break;
            }

    }
}    