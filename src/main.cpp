#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>

int main(int argc, const char* argv[])
{
  SDL_Window* window = SDL_CreateWindow(
    "miauspirit",
    SDL_WINDOWPOS_CENTERED,
    SDL_WINDOWPOS_CENTERED,
    800, 600, 
    0
  );

  SDL_Renderer* renderer = SDL_CreateRenderer(
    window, -1, SDL_RENDERER_ACCELERATED
  );
  
  bool shouldQuit = false;
  
  while (!shouldQuit)
  {
    SDL_Event e;
    while (SDL_PollEvent(&e))
    {
      switch (e.type)
      {
        case SDL_QUIT:
          shouldQuit = true;
          break;
        default:
          break;
      }
    }

    SDL_SetRenderDrawColor(renderer, 140, 70, 90, 255);
    SDL_RenderClear(renderer);

    SDL_RenderPresent(renderer);
  }

  SDL_DestroyWindow(window);
  SDL_DestroyRenderer(renderer);

  return 0;
}
