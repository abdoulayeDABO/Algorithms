#ifndef ELEMENT_H
#define ELEMENT_H

struct element {
	int val;
	struct element * suiv;
};

typedef struct element element;
typedef element * liste;

#endif