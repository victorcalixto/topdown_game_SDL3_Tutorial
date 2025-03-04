#include "camera.h"

void init_camera(SDL_Renderer* renderer){
  Entity camera = {
    .update = update,
  };
  create_entity(camera);
}
