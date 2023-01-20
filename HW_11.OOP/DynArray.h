#include <iostream>

template <class T> class DynArray
{
	T* arr;
	int size;
public:
	DynArray(int sizeP) : arr{ new T[sizeP] {} }, size{ sizeP }{}
	DynArray() : DynArray(5) {}
	DynArray(const DynArray& object): arr{ new T[object.size] }, size{ object.size }
	{
		for (int i{ 0 }; i < size; ++i)
		{
			arr[i] = object.arr[i];
		};
	}
	int getElem(int idx) { return arr[idx]; }
	void setElem(int idx, int val) { arr[idx] = val; }
	void print();
	void randomize();
	~DynArray()
	{
		delete[] arr;
	}
	DynArray<T> AddElement(T num);
	DynArray<T> DellElement(T num);
};

template <class T>
void DynArray<T>::print()
{
	for (int i{ 0 }; i < size; ++i)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << "\n";
}
template <class T>
void DynArray<T>::randomize()
{
	for (int i{ 0 }; i < size; ++i)
	{
		arr[i] = rand() % 10;
	}
}
template <class T>
DynArray<T> DynArray<T>::AddElement(T num)
{
	DynArray <T> temp = size + 1;

	for (int i = 0; i < temp.size; i++)						
	{
		temp.arr[i] = arr[i];
		if (i == temp.size - 1)
		{
			temp.arr[i] = num;
		}
	}
	this->~DynArray();

	arr = new T[temp.size];
	size = temp.size;

	for (int i = 0; i < size; i++)
	{
		arr[i] = temp.arr[i];
	}
	return *this;
}
template <class T>
DynArray<T> DynArray<T>::DellElement(T num)
{
	DynArray <T> temp = size - num;

	for (int i = 0; i < temp.size; i++)
	{
		temp.arr[i] = arr[i];
		if (i == temp.size - 1)
		{
			temp.arr[i] = num;
		}
	}
	this->~DynArray();

	arr = new T[temp.size];
	size = temp.size;

	for (int i = 0; i < size; i++)
	{
		arr[i] = temp.arr[i];
	}
	return *this;
}