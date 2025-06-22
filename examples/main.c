#include <stdlib.h>
#include <stdio.h>
#include "../include/element.h"
#include "../include/fonctions.h"



int main() {
    // element * e = creerElement();
    // e->val = 10;
    // afficherElement(e);
    // free(e);

    // =============================

    // liste tete = creerElement();
    // tete->val = 1;
    // insererTete(&tete, 5);
    // insererTete(&tete, 3);
    // afficherListe(tete);

    // ==============================

    // liste tete = creerElement();
    // tete->val = 1;
    // tete = insererTete2(tete, 5);
    // tete = insererTete2(tete, 3);
    // afficherListe(tete);

    // ===============================

    liste tete = creerElement();
    tete->val = 1;
    tete = insererQueue2(tete, 5);
    tete = insererQueue2(tete, 3);
    insererPosition(&tete, 0, 1);
    insererPosition(&tete, 10, 3);
    afficherListe(tete);
    suprimerPosition(&tete, 3);
    afficherListe(tete);

    return 0;
}
