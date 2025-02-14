#include "serial_comm.h"
#include "led_control.h"

void Serial_ProcessCommand() {
    char command[10], state[5];

    printf("Introduceti comanda: ");
    scanf("%s %s", command, state);  // Citim comanda

    if (strcmp(command, "led") == 0) {
        if (strcmp(state, "on") == 0) {
            LED_On();
            printf("LED aprins!\n");
        } else if (strcmp(state, "off") == 0) {
            LED_Off();
            printf("LED stins!\n");
        } else {
            printf("Comanda necunoscuta. Folositi: 'led on' sau 'led off'.\n");
        }
    } else {
        printf("Comanda necunoscuta. Folositi: 'led on' sau 'led off'.\n");
    }
}
