#ifndef LOADFILE_H
#define LOADFILE_H


#include <stdio.h>
#include "../models/process_info.h"
#include "queue.h"

// Reading processes from input file to queue
void loadInputFile(char *fileName, Queue *queue);

#endif