#include <iostream>
#include "DynArray.h"

/*
������� ��������� ����� ������������� ������� (��. ���� �2, �. 56).
�������� � ���� ����� ������ ��� ���������� �������� � ������� � �������� �������� �� �������
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
