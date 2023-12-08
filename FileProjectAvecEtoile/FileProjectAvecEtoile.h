#ifndef Queue_H_INCLUDED
#define Queue_H_INCLUDED

typedef struct Queue
{
    int cur_nb; // indice de case courante de la  file
    int first; // indice de premier case de la  file
    int tab[10];
} *Queue;

void initializer_Queue(Queue Q);
int AddQueue(Queue Q, int v);
int DeleteQueue(Queue Q);
int HeadQueue(Queue Q);
int IsEmptyQueue(Queue Q);
int IsFullQueue(Queue Q);
void DisplayQueue(Queue Q);

#endif // Queue_H_INCLUDED
