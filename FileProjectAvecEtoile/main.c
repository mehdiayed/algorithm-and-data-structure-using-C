#include <stdio.h>
#include "FileProjectAvecEtoile.h"

int main()
{
    Queue myQueue;
    myQueue = malloc(sizeof(struct Queue));
    if (myQueue == NULL)
    {
        fprintf(stderr, "Erreur d'allocation de mémoire\n");
        return 1;
    }
    initializer_Queue(myQueue);

    // Ajouter des éléments à la file
    AddQueue(myQueue, 1);
    AddQueue(myQueue, 2);
    AddQueue(myQueue, 10);
    AddQueue(myQueue, 3);

    // Afficher la file
    DisplayQueue(myQueue);

    // Afficher le sommet de la file
    printf("Head of the queue: %d\n", HeadQueue(myQueue));

    // Supprimer un élément de la file
    DeleteQueue(myQueue);

    printf("Head of the queue after the delete method: %d\n", HeadQueue(myQueue));

    // Vérifier si la file est vide
    if (IsEmptyQueue(myQueue))
    {
        printf("The queue is empty.\n");
    }
    else
    {
        printf("The queue is not empty.\n");
    }

    // Vérifier si la file est pleine
    if (IsFullQueue(myQueue))
    {
        printf("The queue is full.\n");
    }
    else
    {
        printf("The queue is not full.\n");
    }

    // Afficher la file à la fin
    DisplayQueue(myQueue);

    // Ajouter d'autres éléments à la file
    AddQueue(myQueue, 100);
    AddQueue(myQueue, 3);
    DisplayQueue(myQueue);

    // Libérer la mémoire
    free(myQueue);
    myQueue = NULL;

    return 0;
}