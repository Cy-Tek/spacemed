//
// Created by cytek on 2/17/22.
//

#ifndef SPACEMED_APP_HPP
#define SPACEMED_APP_HPP

#include "SDL.h"

class App {
public:
	App();
	~App();

	void Process();
private:
	void Draw();

	SDL_Window* m_window;
	SDL_Renderer* m_renderer;
};

#endif //SPACEMED_APP_HPP