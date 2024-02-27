#ifndef QUEUE_TASKS_H
#define QUEUE_TASKS_H
#include "./structures/queue.h"
#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

Queue FSS_tasks; // global task queue
mutex queueMutex; 
mutex coutMutex; // A mutex for synchronizing access to standard output

void processTasks(); // A function for completing a task from a queue

#endif