#pragma once
#ifndef MOUSE_H_
#define MOUSE_H_
#define MAX_LEN 20

typedef struct Mouse {
    char firm[MAX_LEN];
    int add_button;
    int coast;
} Mouse;

//‘ункци€ дл€ инициализации структуры. јгрументы: инициализируема€ структура,
//значени€ полей: название фирмы, количество доп кнопок, цена
Mouse Init(Mouse*, char*, int, int);


//‘ункци€, вывод€щу€ сведени€ об экземпл€ре структуры
void Print(Mouse*);


#endif /* MOUSE_H_ */#pragma once
