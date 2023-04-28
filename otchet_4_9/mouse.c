#include "mouse.h"
#include <stdio.h>


//������� ��� ������������� ���������. ���������: ���������������� ���������,
//�������� �����: �������� �����, ���������� ��� ������, ����
Mouse Init(Mouse* m, char* firm, int add_button, int coast)
{
	strncpy(m->firm, firm, MAX_LEN);
	m->add_button = add_button;
	m->coast = coast;

	return *m;
}


//�������, ��������� �������� �� ���������� ���������
void Print(Mouse* m)
{
	printf("Mouse:%s, additional button: %d, coast: %d\n", m->firm, m->add_button, m->coast);
}
