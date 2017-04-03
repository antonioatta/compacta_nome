#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nomeCompleto[] = "Carla Andrade Sodre Bastos";
    char nomeCompacto[50];
    char *ptr, *ptrAux;

    strcpy(nomeCompacto, nomeCompleto);
    ptr=strchr(nomeCompacto, ' ');
    if (ptr != NULL) {
        ptrAux=strrchr(nomeCompleto, ' ');
        strcpy(ptr, ptrAux);
    }
    printf("Nome compacto: %s\n", nomeCompacto);
    return 0;
}





