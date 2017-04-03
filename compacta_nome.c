#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nomeCompleto[] = "Carla Andrade Sodre Bastos";
    char nomeCompacto[50];
    int tam;
    char *ptr;

    ptr=strchr(nomeCompleto, ' ');
    if (ptr==NULL) strcpy(nomeCompacto, nomeCompleto);
    else {
        tam = ptr - nomeCompleto;
        strncpy(nomeCompacto, nomeCompleto, tam);
        nomeCompacto[tam]='\0';
        ptr=strrchr(nomeCompleto, ' ');
        strcat(nomeCompacto, ptr);
    }
    printf("Nome compacto: %s\n", nomeCompacto);
    return 0;
}



