#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>

void pause ();

int main(int argc, char *argv[])
{
    SDL_Surface *ecran = NULL, *imageDeFond = NULL, *bulle = NULL;
    SDL_Rect positionFond, positionBulle;

    positionFond.x = 0;
    positionFond.y = 0;
    positionBulle.x = 290;
    positionBulle.y = 150;


    SDL_Init(SDL_INIT_VIDEO);

    SDL_WM_SetIcon(SDL_LoadBMP("bulle2.bmp"),NULL);

    ecran = SDL_SetVideoMode(1000,600,32, SDL_HWSURFACE);
    SDL_WM_SetCaption("Bubble Blast fever", NULL);

    imageDeFond= SDL_LoadBMP("sdl_test.bmp");
    SDL_BlitSurface(imageDeFond,NULL, ecran, &positionFond);

    bulle = SDL_LoadBMP("sans_titre_converted.bmp");
    SDL_SetColorKey(bulle, SDL_SRCCOLORKEY, SDL_MapRGB(bulle->format, 63, 72, 204));
    SDL_SetAlpha(bulle, SDL_SRCALPHA, 140);
    SDL_BlitSurface(bulle, NULL, ecran, &positionBulle);

    SDL_Flip(ecran);
    pause();

    SDL_FreeSurface(imageDeFond);
    SDL_FreeSurface(bulle);
    SDL_Quit();

    return EXIT_SUCCESS;
}
void pause()
{
    int continuer = 1;
    SDL_Event event;

    while (continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
        }
    }
}
