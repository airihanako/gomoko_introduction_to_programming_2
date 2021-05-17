#include "graphics.hpp"
#include "widget.hpp"
#include "titlescreen.hpp"

using namespace genv;


int main()
{
    gout.open(400,400);
    auto* mainScreen = new TitleScreen(0,0,400,400);
    gout <<text("hello world")<< refresh;
    event ev;
    while(gin >> ev) {
        mainScreen->draw();
    }
    return 0;
}
