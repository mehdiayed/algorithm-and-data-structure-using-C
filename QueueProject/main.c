#include <stdio.h>
#include "Queue.h"

int main() {
    Queue myQueue;
    initializer_Queue(&myQueue);

    // Ajouter des éléments à la file
    AddQueue(&myQueue, 1);
    AddQueue(&myQueue, 2);
    AddQueue(&myQueue, 10);
    AddQueue(&myQueue, 3);
    
    DisplayQueue(myQueue);
    // Supprimer un élément de la file
    printf("Head of the queue: %d\n", HeadQueue(myQueue));
    
    DeleteQueue(&myQueue);
    
    printf("Head of the queue after the delete methode:  %d\n", HeadQueue(myQueue));
    // Afficher le sommet de la file

    // Vérifier si la file est vide
    if (IsEmptyQueue(myQueue)) {
        printf("The queue is empty.\n");
    } else {
        printf("The queue is not empty.\n");
    }

    // Vérifier si la file est pleine
    if (IsFullQueue(myQueue)) {
        printf("The queue is full.\n");
    } else {
        printf("The queue is not full.\n");
    }

    DisplayQueue(myQueue);
    AddQueue(&myQueue, 100);
    AddQueue(&myQueue, 3);
    DisplayQueue(myQueue);
    return 0;
}
