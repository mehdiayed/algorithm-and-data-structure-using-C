# ifndef  LISTE_H_INCLUDED
# define LISTE_H_INCLUDED

typedef struct cell
{
    int valeur ;
    struct cellule * next ;

} cellule ;

typedef struct Liste
{
    cellule * Tete;

} Liste ;

// Initialiser la liste
void initialize_liste(Liste *p);

// Ajouter un �l�ment en t�te de la liste
int Add_Head(Liste *L, int value);

// Ajouter un �l�ment � une position sp�cifique dans la liste
int Add_Position(Liste L, int value, int Position);

// Ajouter un �l�ment en queue de liste
int Add_Queue(Liste L, int Value);

// Supprimer un �l�ment en t�te de la liste
int Delete_Head(Liste *L);

// Supprimer un �l�ment � une position sp�cifique dans la liste
int Delete_Position(Liste L, int Position);

// Supprimer un �l�ment en queue de liste
int Delete_Queue(Liste L);

// V�rifier si la liste est vide
int IsEmpty_Liste(Liste L);



# endif // LISTE_H_INCLUDED