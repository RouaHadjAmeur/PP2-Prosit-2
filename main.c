#include <stdio.h>
#include <stdlib.h>
#include"test.h"
int main()
{
    char nom[100];
    int n;
    enregistrer("nombre_enfant.bin");
    printf("donner un nom");
    scanf("%s",nom);
    chercher("nombre_enfant.bin",nom);
    printf("donner n");
    scanf("%d",&n);
    affiche("nombre_enfant.bin",n);
    suprission("nombre_enfant.bin","nouveau_enfant.bin");
    return 0;
}
