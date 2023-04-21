#include <stdio.h>
#include "menus.h"

char menuproducto()
{
    char opcion;
            printf ("Elija el producto a comprar \n");
            printf ("a) Llantas (precio $150) \n");
            printf ("b) Kit pastillas de freno (precio $55) \n");
            printf ("c) Kit de embrague (precio $180) \n");
            printf ("d) Faro (precio $70) \n");
            printf ("e) Radiador (precio $120) \n");

            scanf(" %c", &opcion);

            return opcion;
}

char menuprincipal ()
{
    int menu;
    printf ("Bienvenido al sistema de facturacion\n");
    printf("Eliga una de las siguientes opciones\n");
    printf ("a) Facturar producto\n");
    printf ("b) Imprimir factura\n");
    printf ("c) Salir\n");
    
    scanf(" %c", &menu);
    
    return menu;
}