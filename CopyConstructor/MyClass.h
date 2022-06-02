#pragma once
#include <iostream>
using namespace std;

class MyClass
{
	int *data;//создаем переменную указатель для массива
private:
	int Size;

public: //не забываем про модификаторы доступа
	
	MyClass(int size);
	MyClass(const MyClass &other);
	~MyClass();
};


