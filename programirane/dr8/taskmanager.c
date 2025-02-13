#include <stdio.h>
#include <string.h>
#include "processes.h"

void printmenu() {
    printf("\nTask Manager\n");
    printf("1. Create new process\n");
    printf("2. List processes\n");
    printf("3. Stop process\n");
    printf("4. Exit\n");
}

void listprocesses() {
    if (processcount == 0) {
        printf("No active processes\n");
        return;
    }

    for (int i = 0; i < processcount; i++) {
        printf("ID: %d, Name: %s\n", processes[i].id, processes[i].name);
    }
}

int main() {
    int choice;

    do {
        printmenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                if (processcount >= MAX_PROCESSES) {
                    printf("Max process count reached\n");
                } else {
                    char name[MAX_PROCESS_NAME];
                    printf("Enter process name: ");
                    fgets(name, MAX_PROCESS_NAME, stdin);
                    name[strcspn(name, "\n")] = '\0';

                    int id = createnewprocess(name);
                    if (id > 0) {
                        printf("Created a new process with ID: %d\n", id);
                    } else {
                        printf("Failed creating a process\n");
                    }
                }
                break;
            }
            case 2:
                listprocesses();
                break;
            case 3: {
                int id;
                printf("Enter process ID: ");
                scanf("%d", &id);
                stopprocess(id);
                break;
            }
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid option!\n");
        }
    } while (choice != 4);

    return 0;
}

