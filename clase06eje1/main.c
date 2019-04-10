#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMAÑO_LIMIT 20

int main()
{
    //char nombre[7]={'X','O','X','X','\0'}; //se le asigna un valor mas por el \0
    //char nombre2[7]="HOLA";

    //NOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO nombre = "Juan";


    //strncpy(nombre,nombre2, sizeof(nombre)); //destino, origen y tamaño
    //printf("\n%s",nombre);
    //fgets(nombre, sizeof(nombre),stdin);
    //NOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO scanf("%s",nombre);
    //printf("\n%s",nombre);
    //strlen() //da cuantos caracteres tiene adentro
    //strcmp() //le paso dos arrays y dice si el de la der es mas grande que el de la izq o si son iguales
    char nombre[11];
    char buffer;
    int i;
    int aux;
    int retorno;

    printf("Ingrese su nombre\n");
    fgets(buffer, sizeof(buffer), stdin);
    aux = strlen(buffer);

    if(buffer!=NULL)
    {
    while(buffer!='\0')
    {
    if(buffer[i]>'a' && buffer[i]<'z' || buffer[i]>'A' && buffer[i]<'Z')
    {
        strncpy(nombre,buffer, sizeof(buffer));
    }else{
    printf("\nsu nombre es: %s", nombre);
    }}
    break;
    }
    return 0;
}
