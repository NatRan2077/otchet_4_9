#pragma once
#ifndef MOUSE_H_
#define MOUSE_H_
#define MAX_LEN 20

typedef struct Mouse {
    char firm[MAX_LEN];
    int add_button;
    int coast;
} Mouse;

//������� ��� ������������� ���������. ���������: ���������������� ���������,
//�������� �����: �������� �����, ���������� ��� ������, ����
Mouse Init(Mouse*, char*, int, int);


//�������, ��������� �������� �� ���������� ���������
void Print(Mouse*);


#endif /* MOUSE_H_ */#pragma once
