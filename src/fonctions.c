/*
 * fonctions.c
 *
 * Implémentation des fonctions pour manipuler une liste chaînée.
 *
 * Auteur : Abdoulaye DABO
 * Date : 2023-10-15
 */


#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "../include/fonctions.h"


element * creerElement() {
    element * e = (element *)malloc(sizeof(element));
    if (e == NULL) {
        printf("Erreur d'allocation\n");
        exit(1);
    }
    e->val = 0;
    e->suiv = NULL;
    return e;
}

void afficherElement(element *l){
	element * tete = l;
	if (tete != NULL){
		printf("%d\n", tete->val);
	}
}

void afficherListe(element *l) {
    element *tete = l;
    while (tete != NULL) {
        printf("%d\n", tete->val);
        tete = tete->suiv;
    }
}


// NOTE: Toutes modification requiert un passage par adresse

void insererTete(element **l, int x) {
    element *e = creerElement();
    e->val = x;
    e->suiv = *l; 
    *l = e;
}

void suprimerTete(element **l){
    if(*l == NULL) exit(1);
    liste tmp = *l;
    *l = (*l)->suiv;
    free(tmp);
}

liste insererTete2(element *l, int x) {
    element *e = creerElement();
    e->val = x;
    e->suiv = l;
    return e;
}

void insererQueue(element **l, int x) {
    element *e = creerElement();
    e->val = x;
    e->suiv = NULL;
    if (*l == NULL) {
        *l = e;
    } else {
        element *tete = *l; 
        while (tete->suiv != NULL) {
            tete = tete->suiv;
        }
        tete->suiv = e;
    }
}

liste insererQueue2(element *l, int x) {
    element *tete = l; 
    element *e = creerElement();
    e->val = x;
    e->suiv = NULL;
    if (l == NULL) {
        return e;
    } else {
        while (tete->suiv != NULL) {
            tete = tete->suiv;
        }
        tete->suiv = e;
    }

    return l;
}


void insererPosition(element **l, int x, int pos){
    if (pos == 1) {
        insererTete(l, x);
        return;
    }

    if (*l == NULL && pos > 1) {
        printf("Erreur\n");
        exit(1);
    }

    element *tete = *l;
    for (int i = 1; i < pos - 1; i++) {
        if (tete == NULL) {
            printf("Position superieure a la taille de la liste\n");
            exit(1);
        }
        tete = tete->suiv;
    }
    // A la sortie on est a pos - 1
    
    element *e = creerElement();
    e->val = x;
    e->suiv = tete->suiv;
    tete->suiv = e;
}


void suprimerPosition(element **l, int pos){
    if (pos == 1) {
        suprimerTete(l);
        return;
    }

    if (*l == NULL && pos > 1) {
        printf("Erreur\n");
        exit(1);
    }

    liste tete = *l;
    for (int i = 1; i < pos - 1; i++) {
        if (tete == NULL) {
            printf("Position superieure a la taille de la liste\n");
            exit(1);
        }
        tete = tete->suiv;
    }
    // A la sortie on est a pos - 1
    // printf("%d\n", tete->val); // affiche la valeur pos - 1
    liste tmp = tete->suiv;
    tete->suiv = tete->suiv->suiv;
    free(tmp);
}

