# ifndef  PILE_H_INCLUDED
# define PILE_H_INCLUDED

#define Max_size 50
typedef struct Pile {
    int sp; // sp hia awil case fargha
    int tab[Max_size];
} Pile ;
 // fil header n7oto les entet mta les fonction si comme si un interface en java 
 
 
void initializer_Pile(Pile *p);// * passage par adresse non par valeur 

int empiler_Pile(Pile *p,int x);

int depiler_Pile(Pile *p);

int Sommet_Pile(Pile p);

int Pleine_Pile(Pile p);

int Vide_Pile();

void Afficher_Pile(Pile p);
# endif // PILE_H_INCLUDED




