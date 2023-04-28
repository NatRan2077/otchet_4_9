#include "my_queue.h"
#include <stdio.h>

Queue* enqueue(Queue* head, Mouse* m)
{
	Queue* newItem = malloc(sizeof(Queue));
	newItem->m = m;
	newItem->next = head;
	newItem->prev = NULL;

	if (head != NULL) //���� ������ �� ������
		head->prev = newItem;

	return newItem;
}

Queue* dequeue(Queue* head, Mouse* m)
{
	Queue* item = head;
	if (head == NULL) {
		puts("������ ����!");
		return;
	}

	while (item->next != NULL) //������� �� ����� ������
		item = item->next;
	item->prev->next = NULL;
	*m = *item->m;
	free(item);
	return head;
}


Queue* delete(Queue* head) {
	Queue* p;
	while (head != NULL) {
		p = head;
		head = head->next;
		free(p);
	}
	return NULL;
}



void PrintQueue(Queue* head) {
	int i = 1;
	puts("��� ������:");
	if (head == NULL) {
		puts("������ ����!");
		return;
	}
	for (Queue* item = head; item != NULL; item = head) {
		head = head->next;
		printf("%d: ", i);
		Print(item->m);
		i++;
	}
}




