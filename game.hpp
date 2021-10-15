#ifndef game_hpp
#define game_hpp
#include <SDL2/SDL.h>
#include <iostream>
//Game logic
class Game{
    public:
        Game();
        ~Game();

        void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
        
        void handleEvents();
        void update();
        void render();
        void clean();//cleans memory
        
        bool running(){return isRunning; } //returns bool

    private:
        int cnt=0;
        bool isRunning;
        SDL_Window *window;
        SDL_Renderer *renderer;
};
#endif /* game_hpp */