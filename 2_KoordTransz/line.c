#include <SDL2/SDL.h>

#include <stdbool.h>
#include <stdio.h>

typedef struct Line
{
	int x1;
	int x2;
	int y1;
	int y2;
	int c1, c2, c3, c4;
	
}Line;

int main(int argc, char* argv[])
{
	Line *line;
	
	line->c1 = 255;
	line->c2 = 0;
	line->c3 = 0;
	line->c4 = 255;
	
	line->x1 = 320;
	line->x2 = 300;
	line->y1 = 200;
	line->y2 = 240;
	SDL_Window* ablak;
	bool need_run;
    SDL_Event event;
	SDL_Renderer* renderer;
	
	ablak = SDL_CreateWindow(
    "Line",
    SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
    800, 600, 0);
	
	renderer = SDL_CreateRenderer(ablak, -1, SDL_RENDERER_ACCELERATED);

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
    SDL_RenderClear(renderer);
	
	SDL_SetRenderDrawColor(renderer, line->c1, line->c2, line->c3, line->c4);
	SDL_RenderDrawLine(renderer, line->x1, line->y1, line->x2, line->y2);
	
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