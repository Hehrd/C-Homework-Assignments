#include <stdio.h>
#include <string.h>
#include "processes.h"

struct Process processes[MAX_PROCESSES];
int processcount = 0;

static int nextprocessid() {
    static int next_id = 1;
    if (next_id > 0) {
        return next_id++;
    }
    return 0;
}

int createnewprocess(char* name) {
    if (processcount >= MAX_PROCESSES) {
        return 0;
    }

    int id = nextprocessid();
    if (id == 0) {
        return 0;
    }

    struct Process new_process = { .id = id };
    strncpy(new_process.name, name, MAX_PROCESS_NAME - 1);
    new_process.name[MAX_PROCESS_NAME - 1] = '\0';

    processes[processcount++] = new_process;

    return id;
}

void stopprocess(int id) {
    int index = -1;
    for (int i = 0; i < processcount; i++) {
        if (processes[i].id == id) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        return;
    }

    for (int i = index; i < processcount - 1; i++) {
        processes[i] = processes[i + 1];
    }

    processcount--;
}
