#include "graphics.hpp"
#include "widget.hpp"
#include "textbox.hpp"
using namespace genv;


int main()
{
    gout.open(400,400);
    auto* textBox = new TextBox(0,0,50,50,"szoveg");
    gout <<text("hello world")<< refresh;
    event ev;
    while(gin >> ev) {
        textBox->draw();
    }
    return 0;
}
