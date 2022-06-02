#include "MyClass.h"
#include <iostream> 
using namespace std;

MyClass::MyClass(int size)//передаем размерность массива
{
	this->Size = size;
	this->data = new int[size];//создаем массив и присваиваем его переменной-указателю класса 
	for (int i = 0; i < size; i++) //заполняем массив его же индексами
	{
		*(data + i) = i;		
		cout << *(data + i) << " ";
	}
	cout << "\nВызвался конструктор " << this << endl;
}
MyClass::MyClass(const MyClass &other)//реализация конструктора копирования
{   // принимается константный объект типа класс 

	//this->data = other.data; реализация конструктора копирования по умолчанию
	
	this->Size = other.Size;
	this->data = new int [other.Size] ; //наша реализация конструктора копирования 
	for (int i = 0; i < other.Size; i++) 
	{
		this->data[i] = other.data[i];		
		cout << *(data + i) << " ";
	}
	cout << "\nВызвался конструктор копирования " << this << endl;
}
MyClass::~MyClass()
{
	cout << "Вызвался деструктор " << this << endl;
	delete[] data; //в декструкторе также уничтожаем сам массив, чтобы не было утечек памяти
}


