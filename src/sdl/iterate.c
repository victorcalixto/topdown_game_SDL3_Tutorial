#include "iterate.h"

SDL_AppResult SDL_AppIterate(void *appstate){
  
  app_update(appstate);
  app_render(appstate);

  //SDL_Event event;

    // Event handling loop
    //while (SDL_PollEvent(&event)) {
    //    if (SDL_AppEvent(appstate, &event) == SDL_APP_SUCCESS) {
    //        return SDL_APP_FAILURE;  // If quit event is received, stop the application
   //     }
   // }

    return SDL_APP_CONTINUE;
}


