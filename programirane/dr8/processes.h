#ifndef PROCESSES_H
#define PROCESSES_H

#define MAX_PROCESSES 5
#define MAX_PROCESS_NAME 30

 struct Process{
    int id;
    char name[MAX_PROCESS_NAME];
};

extern struct Process processes[MAX_PROCESSES];
extern int processcount;

int createnewprocess(char* name);
void stopprocess(int id);

#endif
