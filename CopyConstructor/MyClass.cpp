#include "MyClass.h"
#include <iostream> 
using namespace std;

MyClass::MyClass(int size)//�������� ����������� �������
{
	this->Size = size;
	this->data = new int[size];//������� ������ � ����������� ��� ����������-��������� ������ 
	for (int i = 0; i < size; i++) //��������� ������ ��� �� ���������
	{
		*(data + i) = i;		
		cout << *(data + i) << " ";
	}
	cout << "\n�������� ����������� " << this << endl;
}
MyClass::MyClass(const MyClass &other)//���������� ������������ �����������
{   // ����������� ����������� ������ ���� ����� 

	//this->data = other.data; ���������� ������������ ����������� �� ���������
	
	this->Size = other.Size;
	this->data = new int [other.Size] ; //���� ���������� ������������ ����������� 
	for (int i = 0; i < other.Size; i++) 
	{
		this->data[i] = other.data[i];		
		cout << *(data + i) << " ";
	}
	cout << "\n�������� ����������� ����������� " << this << endl;
}
MyClass::~MyClass()
{
	cout << "�������� ���������� " << this << endl;
	delete[] data; //� ������������ ����� ���������� ��� ������, ����� �� ���� ������ ������
}


