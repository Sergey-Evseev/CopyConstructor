#pragma once
#include <iostream>
using namespace std;

class MyClass
{
	int *data;//������� ���������� ��������� ��� �������
private:
	int Size;

public: //�� �������� ��� ������������ �������
	
	MyClass(int size);
	MyClass(const MyClass &other);
	~MyClass();
};


