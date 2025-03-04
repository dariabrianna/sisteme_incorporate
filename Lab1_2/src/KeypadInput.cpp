#include "KeypadInput.h"

const byte ROWS = 4;
const byte COLS = 4;
char keys[ROWS][COLS] = {
    {'1', '2', '3', 'A'},
    {'4', '5', '6', 'B'},
    {'7', '8', '9', 'C'},
    {'*', '0', '#', 'D'}};
byte rowPins[ROWS] = {9, 8, 7, 6};
byte colPins[COLS] = {5, 4, 3, 2};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

int keypad_getchar(FILE *stream)
{
    char key;
    do
    {
        key = keypad.getKey();
    } while (!key);

    if (key == '#')
    {
        key = '\n';
    }
    return key;
}