/*
 * fonctions.h
 *
 * Ce fichier contient les définitions et les déclarations pour une liste chaînée en C.
 *
 * Auteur : Abdoulaye DABO
 * Date : 2023-10-15
 */

#include "element.h"

#ifndef FONCTIONS_H
#define FONCTIONS_H

element * creerElement(); 
void afficherElement(element *l);
void afficherListe(element *l);
void insererTete(element **l, int x);
void suprimerTete(element **l);
liste insererTete2(element *l, int x);
void insererQueue(element **l, int x);
liste insererQueue2(element *l, int x);
void insererPosition(element **l, int x, int pos);
void suprimerPosition(element **l, int pos);

#endif