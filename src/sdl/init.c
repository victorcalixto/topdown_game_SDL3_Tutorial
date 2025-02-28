#include "init.h"
#include <SDL3/SDL_render.h>

SDL_AppResult SDL_AppInit(void **appstate,int argc, char **argv){
  AppState* state = SDL_malloc(sizeof(AppState));
  *appstate = state;
  if (!SDL_Init(SDL_INIT_VIDEO)){
    SDL_Log("Error initialising SDL: %s",SDL_GetError());
    return SDL_APP_FAILURE;
  }

  state->window = SDL_CreateWindow(
    "SDL3_Game",
    800,
    600,
    0
  );

  if (!state->window){
    SDL_Log("Error creating window: %s",SDL_GetError());
    return SDL_APP_FAILURE;
  }

  state->renderer = SDL_CreateRenderer(state->window,NULL);

  if (!state->renderer){
    SDL_Log("Error creating renderer: %s", SDL_GetError());
    return SDL_APP_FAILURE;

  }
    
  entities[entities_count++] = init_map(state->renderer);
  entities[entities_count++] = init_player(state->renderer);
  
  //320x180 or 640x320
  SDL_SetRenderLogicalPresentation(state->renderer,320,180,SDL_LOGICAL_PRESENTATION_LETTERBOX);
  return SDL_APP_CONTINUE;
}


