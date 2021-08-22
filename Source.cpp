#include <iostream>

using namespace std;

char *del_simb(const char* str, char* res, char simb)
{
	char* tmp = res;
	do
		if (*str != simb)
			*res++ = *str;
	while (*str++);
	return tmp;

	delete tmp;
}

int main()
{
	setlocale(0, "");

	char str[256], buf[256];

	cout << "Введите строку: ";
	cin >> str;
	cout << endl;

	char simb ;
	cout << "Введите номер позиции символа который хотите удалить: ";
	cin >> simb;
	cout << endl;
	cout << endl;
	cout << del_simb(str, buf, simb) << endl;

	return 0;
}

/*Задание 2:
Написать функцию, которая удаляет из строки все вхождения в нее заданного символа.*/