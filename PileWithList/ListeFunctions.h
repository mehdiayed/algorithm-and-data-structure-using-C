#ifndef LISTE_H_INCLUDED
#define LISTE_H_INCLUDED

typedef struct elem
{
    int data ;
    struct elem *next;
} elem;

typedef struct liste
{
    elem* head;
} liste;

int ajouter_deb( liste* l, int x);
int ajouter_fin(liste l, int x);
int ajouter_pos(liste l,int pos,int x);
int supprimer_deb(liste* l);
int supprimer_fin(liste l);
int supprimer_pos(liste l, int pos);
void init(liste* l);
int vide(liste l);

#endif // LISTE_H_INCLUDED
