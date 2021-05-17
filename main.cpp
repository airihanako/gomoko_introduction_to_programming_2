#include "graphics.hpp"
#include "widget.hpp"
#include "titlescreen.hpp"
#include "gamescreen.hpp"

using namespace genv;


int main()
{
    gout.open(400,400);
    auto* mainScreen = new TitleScreen(0,0,400,400);
    auto* gameScreen = new GameScreen(0,0,400,400);
    event ev;
    while(gin >> ev) {
        if (mainScreen->playing){
            gameScreen->draw();
            gameScreen->handle(ev);
        } else{
            mainScreen->draw();
            mainScreen->handle(ev);
        }
    }
    return 0;
}
