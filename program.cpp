#include "splashkit.h"

const int PROG_HEIGHT = 800;
const int PROG_WIDTH  = 450;

int main()
{
    // open a window and clear it to white
    open_window("My Interface!", PROG_WIDTH, PROG_HEIGHT);
    clear_screen(COLOR_DARK_GRAY);

    while (!window_close_requested("My Interface!"))
    {
        // process user events
        process_events();

        // program here


         // show button
        button("My Button!", rectangle_from(PROG_WIDTH / 2, PROG_HEIGHT / 2, PROG_WIDTH / 4, 24));

        // draw the interface!
        draw_interface();

         // refresh the screen
        refresh_screen();
    }

    // close all open windows
    close_all_windows();

    return 0;
}