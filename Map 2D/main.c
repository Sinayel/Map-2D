#include <SDL.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int const hauteur = 11;
int const largeur = 11;
int const taille_carre = 20;

int joueurX = 5;		// Posisitionnement du joueur sur la map en X
int joueurY = 2;		// Posisitionnement du joueur sur la map en Y

int map[hauteur][largeur] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1},
    {1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

int main(int argc, char **argv)
{
    SDL_Window *window = NULL;
    SDL_Renderer *render = NULL;
    int statut = EXIT_FAILURE;

    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        fprintf(stderr, "Erreur de SDL_Init : %s", SDL_GetError());
        goto Quit;
    }

    window = SDL_CreateWindow("Test", SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN);
    if (window == NULL)
    {
        fprintf(stderr, "Erreur de window : %s", SDL_GetError());
        goto Quit;
    }

    render = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (render == NULL)
    {
        fprintf(stderr, "Erreur de rendu : %s", SDL_GetError());
        goto Quit;
    }

    SDL_Rect joueur;				// Definis la variable joueur en tant que rectangle/carre
    joueur.w = taille_carre;		// Definis la taille du joueur en Largeur
    joueur.h = taille_carre;		// Definis la taille du joueur en Hauteur

    bool en_cours = true;
    while (en_cours)
    {
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
                en_cours = false;

            else if (event.type == SDL_KEYDOWN)				// Fonction pour voir si une touche est presser (ou reste presser)
            {
                switch (event.key.keysym.sym)				// Switch sur les touches du clavier (on precisera quelle touche dans les cases)
                {
                case SDLK_LEFT:
                    if (map[joueurY][joueurX - 1] == 0)		// Soustraie 1 a la position du joueur en X
                        joueurX--;
                    break;
                case SDLK_RIGHT:
                    if (map[joueurY][joueurX + 1] == 0)		// Additionne 1 a la position du joueur en X
                        joueurX++;
                    break;
                case SDLK_UP:
                    if (map[joueurY - 1][joueurX] == 0)		// Soustraie 1 a la position du joueur en Y
                        joueurY--;
                    break;
                case SDLK_DOWN:
                    if (map[joueurY + 1][joueurX] == 0)		// Additionne 1 a la position du joueur en Y
                        joueurY++;
                    break;
                }
            }
        }

        SDL_SetRenderDrawColor(render, 0, 0, 0, 255); 	// Definis le fond en noir
        SDL_RenderClear(render);						// Actualise le fond
		int x, y;
		x = 0;
        while (x < largeur)
        {
			y = 0;
            while (y < hauteur)
            {
                if (map[x][y] == 1)
                {
					// Affiche la map
                    SDL_SetRenderDrawColor(render, 155, 0, 200, 0);
					SDL_Rect rect = {y * taille_carre, x * taille_carre, taille_carre, taille_carre};
					SDL_RenderFillRect(render, &rect);

					// Affiche la grille
					SDL_SetRenderDrawColor(render, 255, 255, 255, 255);												// Couleur blanche
					SDL_RenderDrawLine(render, y * taille_carre, x, y * taille_carre, (x+1) * taille_carre);		// Ligne verticale
					SDL_RenderDrawLine(render, y, x * taille_carre, (y+1) * taille_carre, x * taille_carre);		// Ligne Horizontale
				}
				y++;
            }
			x++;
        }

        SDL_SetRenderDrawColor(render, 0, 255, 0, 0);	// Definis la couleur en vert du joueur
        joueur.x = joueurX * taille_carre;				// Definis la taille du joueur avec les X
        joueur.y = joueurY * taille_carre;				// Definis la taille du joueur avec les Y
        SDL_RenderFillRect(render, &joueur);			// Applique la taille du joueur au joueur

        SDL_RenderPresent(render);						// Actualise le FOnd et le joueur
    }

    statut = EXIT_SUCCESS;

Quit:
    if (render)
        SDL_DestroyRenderer(render);
    if (window)
        SDL_DestroyWindow(window);
    SDL_Quit();
    return (statut);
}
