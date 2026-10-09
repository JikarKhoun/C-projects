#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void hideCursor()
{
    CONSOLE_CURSOR_INFO cursorInfo;
    cursorInfo.dwSize = 100;
    cursorInfo.bVisible = FALSE;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

int main()
{
    hideCursor();

    while (1)
    {
        time_t now;
        struct tm *current;

        time(&now);
        current = localtime(&now);

        system("cls");

        printf("%02d : %02d : %02d\n",
               current->tm_hour,
               current->tm_min,
               current->tm_sec);

        Sleep(1000);
    }

    return 0;
}

