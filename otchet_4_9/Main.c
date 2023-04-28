#include <stdio.h>
#include "mouse.h"
#include "my_queue.h"
#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    Mouse* m1 = malloc(sizeof(Mouse)), * m2 = malloc(sizeof(Mouse)), * m3 = malloc(sizeof(Mouse)), * m4 = malloc(sizeof(Mouse)), * m5 = malloc(sizeof(Mouse));
    *m1 = Init(m1, "Bloody", 3, 2500);
    *m2 = Init(m2, "Logitech", 2, 7500);
    *m3 = Init(m3, "HyperX", 4, 8500);
    *m4 = Init(m4, "Dexp", 6, 500);
    *m5 = Init(m5, "Razer", 2, 10000);


    Queue* head = NULL;
    head = enqueue(head, m1);
    head = enqueue(head, m2);
    head = enqueue(head, m3);
    head = enqueue(head, m4);
    head = enqueue(head, m5);
    PrintQueue(head);

    Mouse* mDel = malloc(sizeof(Mouse));
    head = dequeue(head, mDel);
    Print(mDel);
    head = dequeue(head, mDel);
    Print(mDel);
    head = dequeue(head, mDel);
    Print(mDel);
    PrintQueue(head);

    head = delete(head);


    return 0;
}