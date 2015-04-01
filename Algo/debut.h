#ifdef debut_h
#endif
#define debut_h

// position cartésienne
typedef struct {
   int x,y;
 } POSITION;

// definition d'une bulle
typedef struct {
        int rg;
        POSITION pos;
    } BULLE;

//definition de l'ensemble des bulles
typedef BULLE*** ensBulles;

//definition d'une bille
typedef struct{
        POSITION pos,dir,futur;
    } BILLE;

//definition de l'ensemble des billes
const int NBILLES_MAX=100;

typedef struct{
        int nbr;
        BILLE * tab[NBILLES_MAX];
    } ENSBILLES;

typedef ENSBILLES* ensBilles;
 
// tableau de jeu

typedef struct {
    BULLE *** ensBulles;
    ENSBILLES * ensBilles;
    int clics;
} TABLEAUJEU;

/*gestion de l'affichage

typedef struct {
    SDL_Surface *ecran, *bulleR, *bulleV, *bulleJ, *bulleB,
    *bille, *fond, *cercle, *menu, *drapeau, *carre1 ,*carre2, *rectblc, *rewind ,*pause , *play, *next, *indice ,*reset ,*end, *reessayer , *trophy, *retour;
    
    Mix_Chunk *son,*sonMenu; Mix_Music *musique;
    
    TTF_Font *police, *police2;
} AFFICHAGE;
*/