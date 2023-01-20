#include <iostream>
#include "DynArray.h"

/*
Создать шаблонный класс динамического массива (см. урок №2, с. 56).
Добавить в этот класс методы для добавления элемента к массиву и удаления элемента из массива
*/

int main()
{
	DynArray <int> arry_one{ 5 };
	arry_one.randomize();
	arry_one.print();
	arry_one.AddElement(5);
	arry_one.print();
	arry_one.DellElement(2);
	arry_one.print();
	return 0;
}
