#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

void gotoxy(int x, int y) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(hConsole, pos);
}

int main() {
    int x = 10, y = 10; // Posici�n inicial del punto
    char direction;

    while (true) {
        gotoxy(x, y);
        cout << "*"; // Dibuja el punto en la posici�n actual

        direction = _getch(); // Captura la direcci�n del usuario

        // Borra el punto de la posici�n actual
        gotoxy(x, y);
        cout << " ";

        // Mueve el punto seg�n la direcci�n ingresada por el usuario
        switch (direction) {
            case 'w':
                y--;
                break; // Mover arriba
            case 's':
                y++;
                break; // Mover abajo
            case 'a':
                x--;
                break; // Mover izquierda
            case 'd':
                x++;
                break; // Mover derecha
            default:
                break;
        }
    }

    return 0;
}

