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

// Ajouter un élément en tête de la liste
int Add_Head(Liste *L, int value);

// Ajouter un élément à une position spécifique dans la liste
int Add_Position(Liste L, int value, int Position);

// Ajouter un élément en queue de liste
int Add_Queue(Liste L, int Value);

// Supprimer un élément en tête de la liste
int Delete_Head(Liste *L);

// Supprimer un élément à une position spécifique dans la liste
int Delete_Position(Liste L, int Position);

// Supprimer un élément en queue de liste
int Delete_Queue(Liste L);

// Vérifier si la liste est vide
int IsEmpty_Liste(Liste L);



# endif // LISTE_H_INCLUDED