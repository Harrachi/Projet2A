/* source: http://chgi.developpez.com/c/objet/ */

#include <stdlib.h>
#include <stdio.h>

#include "pile.h"

int main()
{
        TPile MaPile = TPile_Create();

        MaPile.Push(&MaPile, 10);
        MaPile.Push(&MaPile, 25);
        MaPile.Push(&MaPile, 33);
        MaPile.Push(&MaPile, 12);

        puts("Affichage de la pile :");
        MaPile.View(&MaPile);
        puts("------");

        printf("Nb d'elements : %d\n",MaPile.Length(&MaPile));
        puts("------");

        puts("Deux valeurs soutirees de la pile :");
        printf("%d\n",MaPile.Pop(&MaPile));
        printf("%d\n",MaPile.Pop(&MaPile));
        puts("------");

        puts("Affichage de la pile :");
        MaPile.View(&MaPile);
        puts("------");

        MaPile.Clear(&MaPile);
        MaPile.Push(&MaPile, 18);

        puts("Affichage de la pile apres vidage et ajout d'une valeur :");
        MaPile.View(&MaPile);
        puts("------\n");

        MaPile.Free(&MaPile);

        return 0;
}
