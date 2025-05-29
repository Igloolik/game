#include "splashkit.h"

int main()
{
    // open a window and clear it to white
    open_window("My Interface!", 800, 600);
    clear_screen(COLOR_WHITE);

    // ...we'll put our interface code here!...

    // Test Merge

    // refresh the screen, then wait 5 seconds
    refresh_screen();
    delay(5000);

    // close all open windows
    close_all_windows();

    return 0;
}