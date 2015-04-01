#include <stdlib.h>
#include <stdio.h>

#define NB_BILLES_MAX 100
// Definition du nbre de billes max.


typedef struct {
        int x,y;
    } POSITION;
// Definition Type POSITION

typedef struct {
        int rg;
        POSITION pos;
        } BULLE;
// Definition Type BULLE

typedef struct {
        POSITION pos,dir,futur;
        } BILLE;
// Definition Type BILLE

typedef struct {
        int nbr;
        BILLE* tab[NB_BILLES_MAX];
         }ENSBILLES;
// Definition Type ENSBILLES








// fonction deplacerBilles

ENSBILLES deplacerBilles(ENSBILLES tabBilles){
int i; //variable locale i
int x,y;
for(i=k;k=>0;i--){

    if(BIlLE k==dehors)
    supprimer(BILLE.k);
    // dehors et supprimer() ­ definir

    if((BILLE.futur K==x,y)&&(estPresentBulle(i,j)==VRAI)) {
        // Definition d'une fonction ­ valeurs booleennes estPresentBulle
        if (BULLE.rg==-1) // redefinir la selection de la bulle consideree
            supprimer(BILLE K);
        if (BULLE.rg==0){
            creerBille(); //meme position, direction BILLE K
            supprimer (BILLE K);}
        if(BULLE.rg==1)
            {supprimer(BILLE K);
            BULLE.rg=-1
            creer4(); }// ­ definir
        if(BULLE.rg>1)
            BULLE.rg-=;
            supprimer(BILLE K); }

}
}



}


