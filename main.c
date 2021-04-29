#include <stdio.h>
#include <stdlib.h>

// Prototipos
void registrarContactos(FILE *archivo);
void eliminarContacto(FILE archivo);
void mostrarContactos(FILE contactos);


int main()
{
    // Puntero de archvio
    FILE *ptrArchivoContactos;

    // Variables de control del menu
    int opc;

    do {

        system("cls");

        printf("Agenda de contactos del monitoreo\n");
        printf("1. Ingresar contactos\n");
        printf("2. Mostrar contactos\n");
        printf("3. Ingresar solo un contacto\n");
        printf("4. Salir de la aplicacion\n");

        scanf("%i", &opc);

    } while (opc < 1 || opc > 4);

    // Ciclar el menu

    switch(opc){
        case 1:
            registrarContactos(ptrArchivoContactos);
            break;
    }

    return 0;
}

void registrarContactos(FILE *archivo){

    // 1. Abrir el archivo
    archivo = fopen("contactos.dat", "a");

    // Variable a anadir al archivo
    char nombre[20];
    char apellido[20];
    char numero[20];
    char id[20];

    system("cls");
    printf("Adiciona contactos. Introduce nombre, apellido, numero y id\n");
    printf("-> ");
    scanf("%s %s %s %s", nombre, apellido, numero, id);

    while(!feof(stdin)){
        fprintf(archivo, "%s %s %s %s\n", nombre, apellido, numero, id);
        printf("-> ");
        scanf("%s %s %s %s", nombre, apellido, numero, id);
    }

    // 2. Cerrar el archivo
    fclose(archivo);

}

void eliminarContacto(FILE archivo){

}

void mostrarContactos(FILE contactos){

}
