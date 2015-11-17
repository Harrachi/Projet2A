/* source: http://chgi.developpez.com/c/heritage/ */

#include <stdlib.h>
#include <stdio.h>

#include "dpile.h"

int main()
{
        TDPile *MaPile = New_TDPile_MM(0, 30);

        MaPile->Push(MaPile, 10);
        MaPile->Push(MaPile, 25);
        MaPile->Push(MaPile, 33);
        MaPile->Push(MaPile, 12);

        printf("Borne maxi : %d\n",MaPile->GetMaxValue(MaPile));
        puts("------");
        puts("Affichage de la pile :");
        MaPile->View(MaPile);
        puts("------");
        printf("Nb d'elements : %d\n",MaPile->Length(MaPile));

        MaPile->Free(MaPile);
        MaPile = NULL;

#ifdef __WIN32__
        system("PAUSE");
#endif
        return 0;
}
