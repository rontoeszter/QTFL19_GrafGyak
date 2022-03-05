#include <SDL2/SDL.h>

#include <stdbool.h>
#include <stdio.h>

// Szakasz - SDL
int main(int argc, char* argv[])
{

  int error_code;
  SDL_Window* ablak;
  bool need_run;
  SDL_Event event;
  SDL_Renderer* renderer;
  int i;

  error_code = SDL_Init(SDL_INIT_EVERYTHING);
  if (error_code != 0) {
    printf("SDL inicializacios hiba: %s\n", SDL_GetError());
    return error_code;
  }

  ablak = SDL_CreateWindow(
    "Szakasz",
    SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
    800, 600, 0);

    renderer = SDL_CreateRenderer(ablak, -1, SDL_RENDERER_ACCELERATED);

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
    SDL_RenderClear(renderer);

    SDL_SetRenderDrawColor(renderer, 255, 0, 0, SDL_ALPHA_OPAQUE);
    SDL_RenderDrawLine(renderer, 100, 0, 100, 100);

    SDL_RenderPresent(renderer);

  need_run = true;
  while (need_run) {
    while (SDL_PollEvent(&event)) {
      switch (event.type) {
      case SDL_KEYDOWN:
        case SDL_SCANCODE_Q:
        need_run = false;
        break;
      case SDL_QUIT:
        need_run = false;
        break;
      }
    }
  }

  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(ablak);
  SDL_Quit();

  return 0;
}