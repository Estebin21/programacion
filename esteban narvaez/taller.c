#include <stdio.h>
#include "menus/menus.h"
#include "modulos/modulos.h"

int main (int argc, char *argv[]) {

    float s1=0, s2=0, s3=0, s4=0, s5=0;
    float p1=150, p2=55, p3=180, p4=70, p5=120;
    float n1=0, n2=0, n3=0, n4=0, n5=0;
    float subtotal=0, total=0, descuento=0;
    char opcion, menu;
    int resp;
    char nombre[50], cedula[20];

do{
    menu=menuprincipal();
    switch (menu)
    {
    case 'a':
        do
        {
            
            opcion=menuproducto();

            switch (opcion)
            {
            case 'a':
                printf("Ingrese el numero de llantas que desea facturar\n");
                scanf("%f", &n1);
                break;

            case 'b':
                printf("Ingrese el numero de kit de pastillas de freno\n");
                scanf("%f", &n2);
                break;
            case 'c':
                printf("Ingrese el numero de kit de embrague\n");
                scanf("%f", &n3);
                break;
            case 'd':
                printf("Ingrese el numero de faros\n");
                scanf("%f", &n4);
                break;
            case 'e':
                printf("Ingrese el numero de radiadores\n");
                scanf("%f", &n5);
                break;
            default:
                printf("Opcion no valida\n");
                break;
            }            

            printf("Quieres otro producto: \n");
            printf("Si=1 o No=0\n");
            scanf("%d", &resp);

        }while(resp==1 && menu=='a');
        break;

        case'b':

            s1=n1*p1;
            s2=n2*p2;
            s3=n3*p3;
            s4=n4*p4;
            s5=n5*p5;
    
            subtotal=s1+s2+s3+s4+s5;
            
            subtotal=calculosubtotal(subtotal);

                descuento=subtotal-total;

            printf("\nIngrese el nombre del cliente: \n");
            scanf("%s", &nombre);
            printf("Ingrese la cedula del cliente: \n");
            scanf("%s", &cedula);
            
                imprimirfactura(n1,n2, n3, n4, n5, 
                                p1, p2, p3, p4, p5,
                                s1, s2, s3, s4, s5, 
                                nombre, cedula);

            
                printf("El subtotal es: %.2f\n", subtotal);
                        if    (subtotal>500 && subtotal <=1000)
                    {
                        printf("Su porcentaje de descuento fue de 4 porciento, y su descuento fue de: %.2f \n", descuento);
                    }
                        else if(subtotal>1000 && subtotal<=5000)
                    {
                        printf("Su porcentaje de descuento fue de 7 porciento, y su descuento fue de: %.2f \n", descuento);
                    }
                        else if(subtotal>5000)
                    {
                        printf("Su porcentaje de descuento fue de 9 porciento, y su descuento fue de: %.2f \n", descuento);
                    }
                printf("El total es: %.2f\n", total);
                break;
            case 'c':
                printf("Gracias por su compra, adios!");
                break;
            default:
                printf("no valido\n");
                break;
    }    

} while (resp==0 && menu=='a');
    
    return 0;

}

