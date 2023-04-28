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

//������� ��� ���������� �������� � ������ �������.
Queue* enqueue(Queue* head, Mouse* m);

//������� ��� �������� �������� �� ����� �������. 
//� m ������������ ��������� �������
Queue* dequeue(Queue* head, Mouse* m);

//������� ��� �������� ���� ��������� �������.
Queue* delete(Queue* head);


void PrintQueue(Queue* head);

#endif /* MY_QUEUE_H_ */
