#include <stdio.h>

void printState(unsigned char lights) {
    printf("The light is on in rooms: ");
    for (char i = 0; i < 8; i++) {
        if ((lights >> i) & 1) {
            printf("%d ", i + 1); 
        }
    }
    printf("\n");
}
void toggleLight(unsigned char *lights, unsigned char room) {
    if (room < 1 || room > 8) {
        printf("Invalid room number!\n");
        return;
    }
    unsigned char mask = 1 << (room - 1);
    *lights ^= mask;
    printf("Toggled light in room %d.\n", room);
}

int main(void) {
    unsigned char lights = 0;
    int choice;
    unsigned char room;

    while (1) {
        printf("1. Switch lights\n");
        printf("2. Print state\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter room number to toggle (1-8): ");
                scanf("%hhu", &room);
                toggleLight(&lights, room);
                break;

            case 2:
                printState(lights);
                break;

            case 3:
                printf("Exiting\n");
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
