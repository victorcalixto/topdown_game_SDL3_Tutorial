compile: build run

build:
	gcc ./src/*.c \
	./src/sdl/*.c \
	-o ./out/sdl_game \
	-lSDL3 -lSDL3_image

run:
	./out/sdl_game

