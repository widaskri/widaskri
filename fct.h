#include<stdio.h>
#include<stdlib.h>
#include "fonction.h"
typedef struct
{
    int etat;
    SDL_Surface *image;
    SDL_Rect position;

}Background;

typedef struct
{
    SDL_Surface *Mat[15][15];
    SDL_Rect position;
    int i,j;// direction

}Personne;



void initback(background *b)
void afficheback(background b,SDL_Surface*screen)
void animerBackground(background *e);
int collisioPP(personne p,SDL_Surface *masque);
void scrolling (background *b,int direction , int pasAvancement);

