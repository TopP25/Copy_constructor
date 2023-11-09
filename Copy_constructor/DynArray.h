#pragma once
#include "Copy.h"

class DynArray {
	int* arr;
	int size;
public:
	DynArray(int size) : arr{ new int[size] }, size{size} {
		cout << "DynArray ����������� � ������� " << this;
		cout << ", ���-�� ��-��� " << size << endl;
	}
	DynArray():DynArray(5){}
	DynArray(const DynArray &dyn) {
		size = dyn.size;
		arr = new int[size];
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = dyn.arr[i];
		}
		cout << "DynArray ����������� � ������� " << this;
		cout << ", ���-�� ��-��� " << size << endl;
	}
	~DynArray() {
		delete[] arr;
		cout << "DynArray ���������� � ������� " << this;
		cout << ", ���-�� ��-��� " << size << endl;
	}
	int sum(const int& i) {
		if (i <= 1) {
			return 1;
		}
		return i + sum(i - 1);
	}
};