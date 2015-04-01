//
//  main.c
//  Projet_SDL
//
//  Created by Edouard TOPIN on 01/04/2015.
//  Copyright (c) 2015 Edouard TOPIN. All rights reserved.
//
#include "SDL/SDL.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    SDL_Surface *ecran = NULL;
    
    SDL_Init(SDL_INIT_VIDEO);
    
    ecran = SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE);
    SDL_WM_SetCaption("Ma super fenêtre SDL !", NULL);
    
    // Coloration de la surface ecran en bleu-vert
    SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 17, 206, 112));
    
    SDL_Flip(ecran); /* Mise à jour de l'écran avec sa nouvelle couleur */
    
    pause();
    
    SDL_Quit();
    
    return EXIT_SUCCESS;
}