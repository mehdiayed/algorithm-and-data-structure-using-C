#include<stdio.h>
#include "FileProjectAvecEtoile.h"

void initializer_Queue(Queue Q) {
    Q->first = 0;
    Q->cur_nb = 0;
}

int AddQueue(Queue Q, int v) {
    if (IsFullQueue(*Q)) {
        return -1;
    }
    Q->tab[(Q->first + Q->cur_nb) % 10] = v;
    Q->cur_nb++;
    return 1;
}

int DeleteQueue(Queue Q) {
    if (IsEmptyQueue(*Q))
        return -1;

    Q->first = (Q->first + 1) % 10;

    if (Q->cur_nb > 0) {
        Q->cur_nb--;
    }

    return 1;
}

int HeadQueue(Queue Q) {
    if (!IsEmptyQueue(*Q))
        return Q->tab[Q->first];
    return -1;
}

int IsEmptyQueue(Queue Q) {
    return (Q->cur_nb == 0);
}

int IsFullQueue(Queue Q) {
    return (Q->cur_nb == 10);
}

void DisplayQueue(Queue Q) {
    int i;
    printf("Queue content: ");
    for (i = 0; i < Q->cur_nb; i++) {
        printf("%d ", Q->tab[(Q->first + i) % 10]);
    }
    printf("\n");
}
