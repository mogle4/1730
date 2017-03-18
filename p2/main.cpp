#include <cstdlib>
#include <string>
#include <iostream>
#include <ncurses.h>
#include <string>

using namespace std;

void curses_init()
{
    initscr();
    noecho();
    cbreak();
    keypad(stdscr, true);
}

int main(int argc, char* argv[])
{
    string fn = "";
    if ( argc > 1)
    {
        fn = argv[1];
    }

    curses_init();
    refresh();
    endwin();
    return EXIT_SUCCESS;
}
