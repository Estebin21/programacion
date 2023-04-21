#include <stdio.h>
#include "modulos.h"

float calculosubtotal(float subtotal){
    float total;
    if (subtotal>500 && subtotal <=1000)
            {
                total=subtotal*0.96;
            }
            else if(subtotal>1000 && subtotal<=5000)
            {
                total=subtotal*0.93;
            }
            else if(subtotal>5000)
            {
            total=subtotal*0.91;
            }
            else
            {
            total= subtotal;
            printf("No se va a aplicar descuento alguno"); 
            }
            return total;
}

void imprimirfactura(float n1, float n2, float n3, float n4, float n5, 
                    float p1, float p2, float p3, float p4, float p5,
                    float s1, float s2, float s3, float s4, float s5,
                    char nombre [], char cedula[])
                    

{
     printf("########################################");
            printf("Factura########################################\n");
            printf("Nombre: %s\n", nombre);
            printf("Cedula: %s\n", cedula);
            printf("Producto                Cantidad        Precio Unitario     Precio Total\n");
            if (n1!=0){
                printf("Llantas                   %.0f                %.2f               %.2f\n", n1, p1,s1);
            }
            if (n2!=0){
                printf("Kit de pastillas          %.0f                %.2f               %.2f\n", n2, p2,s2);
            }
            if (n3!=0){
                printf("Kit de embrague           %.0f                %.2f               %.2f\n", n3, p3,s3);
            }
            if (n4!=0){
                printf("Faros                     %.0f                %.2f               %.2f\n", n4, p4,s4);
            }
            if (n5!=0){
                printf("Radiadores                %.0f                %.2f               %.2f\n", n5, p5,s5);
            }
                
}