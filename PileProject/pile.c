#include <stdio.h>
#include "pile.h"

void initializer_Pile(Pile *p){
    //(*p).sp = 0;
    p->sp=0; // pointeur
}

int empiler_Pile(Pile *p,int x){ //argument Pile *p cest ladresse de la pile 
    if (Pleine_Pile(*p) == 0){ // n3diw la valeur pointé par P
        p->tab[p->sp] = x;
        p->sp++;
        return 1;
    }else{
        return 0;
    }
}


int depiler_Pile(Pile *p){
    if(Vide_Pile(*p)==0){
        p->sp--;
        return 1; // bech nchoufou est ce que sar depilage ou nn 
    }
    return 0;
}


int Sommet_Pile(Pile p){ // l valeur chtraja3llik l vaur du sommet 
    // 3andik *  t7ot -> ma 3andikich t7ot " . "
    return p.tab[p.sp-1];
}

int Pleine_Pile(Pile p){
    if(p.sp==Max_size){
        return 1;
    }
    else{
        return 0;
    }
}
int Vide_Pile(Pile p){
 if(p.sp==0){
        return 1;
    }
    else{
        return 0;
    }
}
void Afficher_Pile(Pile p) {
    printf("Contenu de la pile :\n");

    if (Vide_Pile(p)) {
        printf("La pile est vide.\n");
    } else {
        for (int i = 0; i < p.sp; i++) {
            printf("%d ", p.tab[i]);
        }
        printf("\n");
    }
}