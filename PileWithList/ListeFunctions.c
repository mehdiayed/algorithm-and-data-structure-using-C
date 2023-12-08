#include <stdio.h>
#include <stdlib.h>
#include "ListeFunctions.h"

void init(liste* l)
{
    l->head = NULL;
}

int ajouter_deb(liste* l, int x)
{
    elem* deb;
    deb = malloc(sizeof(elem));
    if (deb == NULL)
    {
        return -1;
    }
    else
    {
        deb->data = x;
        deb->next = l->head;
        l->head = deb;
    }
    return 1;
}

int ajouter_fin(liste l, int x)
{
    elem* fin;
    elem* boucle;
    boucle = l.head;
    fin = malloc(sizeof(elem));
    if (fin == NULL)
    {
        return -1;
    }
    fin->data = x;
    fin->next = NULL;
    if (l.head == NULL) // Si la liste est vide, l'élément ajouté est le premier et le dernier.
    {
        l.head = fin;
        return 1;
    }
    while (boucle->next != NULL)
    {
        boucle = boucle->next;
    }
    boucle->next = fin;
    return 1;
}

int ajouter_pos(liste l, int pos, int x)
{
    int n = 0;
    elem* el;
    elem* prev;
    prev = l.head;
    el = malloc(sizeof(elem));
    if (el == NULL)
    {
        return -1;
    }
    el->data = x;
    while (n != pos - 1 && prev != NULL)
    {
        prev = prev->next;
        n++;
    }
    if (prev == NULL)
    {
        return -1;
    }
    el->next = prev->next;
    prev->next = el;
    return 1;
}

int supprimer_deb(liste* l)
{
    elem* n;
    if (l->head == NULL)
    {
        return -1;
    }
    n = l->head;
    l->head = (l->head)->next;
    free(n);
    return 1;
}

int supprimer_fin(liste l)
{
    elem* boucle;
    elem* f;
    if (l.head == NULL)
    {
        return -1;
    }
    f = l.head;
    boucle = (l.head)->next;
    if (boucle == NULL) // Si la liste a un seul élément, on le supprime.
    {
        free(f);
        l.head = NULL;
        return 1;
    }
    while (boucle->next != NULL)
    {
        boucle = boucle->next;
        f = f->next;
    }
    f->next = NULL;
    free(boucle);
    return 1;
}

int supprimer_pos(liste l, int pos)
{
    int n = 0;
    elem* prev;
    elem* succ;
    prev = l.head;
    succ = (l.head)->next;
    while (n != pos - 1 && succ != NULL)
    {
        prev = prev->next;
        succ = succ->next;
        n++;
    }
    if (succ == NULL)
    {
        return -1;
    }
    prev->next = succ->next;
    free(succ);
    return 1;
}

int vide(liste l)
{
    if (l.head == NULL)
    {
        return 0; // La liste n'est pas vide.
    }
    return -1; // La liste est vide.
}

void afficher_liste(liste l)
{
    elem* courant = l.head;
    
    printf("Contenu de la liste : ");

    while (courant != NULL)
    {
        printf("%d ", courant->data);
        courant = courant->next;
    }

    printf("\n");
}
