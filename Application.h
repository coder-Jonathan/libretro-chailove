#ifndef APPLICATION_H
#define ifndef APPLICATION_H

#include <SDL.h>
#include "chaigame/chaigame.h"

class Application {
public:
    static Application* getInstance();
    static bool isRunning();
	static Application* m_instance;
	static void destroy();

	chaigame::keyboard keyboard;
	chaigame::script* script;
	chaigame::filesystem filesystem;
	chaigame::graphics graphics;
	chaigame::image image;

	void quit(void);
	bool load(std::string);
	bool update();
	void draw();

	uint32_t *videoBuffer;
	Uint32 tick;
	SDL_Surface* screen;
	SDL_Event event;
};

#endif