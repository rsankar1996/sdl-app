#include "main.hpp"
#include <SDL2/SDL.h>
#include <cstdio>

int main() {
  SDL_Window* myWindow = NULL;
  SDL_Surface* myScreen = NULL;

  if (SDL_Init( SDL_INIT_VIDEO ) < 0) {
    printf("SDL Initialisation failed!!\r\n");
    return -1;
  }

  myWindow = SDL_CreateWindow("Hello World", SDL_WINDOWPOS_UNDEFINED,
			      SDL_WINDOWPOS_UNDEFINED, SCREEN_WD, SCREEN_HT, SDL_WINDOW_SHOWN);

  if (myWindow == NULL) {
    printf("SDL Window creation failed\r\n");
    return -1;
  }

  myScreen = SDL_GetWindowSurface(myWindow);

  SDL_FillRect(myScreen, NULL, SDL_MapRGB(myScreen->format, 0xFF, 0xFF, 0xFF));

  SDL_UpdateWindowSurface(myWindow);

  SDL_Delay(5000);

  SDL_DestroyWindow(myWindow);

  SDL_Quit();

  return 0;
}
