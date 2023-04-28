#pragma once
#pragma once
#ifndef MY_QUEUE_H_
#define MY_QUEUE_H_
#include "mouse.h"

typedef struct Queue {
    Mouse* m;
    struct Queue* next;
    struct Queue* prev;
} Queue;

//Функция для добавления элемента в начало очереди.
Queue* enqueue(Queue* head, Mouse* m);

//Функция для удаления элемента из конца очереди. 
//В m запоминается удаленный элемент
Queue* dequeue(Queue* head, Mouse* m);

//Функцию для удаления всех элементов очереди.
Queue* delete(Queue* head);


void PrintQueue(Queue* head);

#endif /* MY_QUEUE_H_ */
