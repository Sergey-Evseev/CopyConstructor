#include <iostream>
#include "MyClass.h"
using namespace std;

//��������������� ���������� ������������
//������� ��������� ���������� value ���� MyClass 
void Foo(MyClass value) //�������� ��������� �� �������� - �� �� ������, �� �� ��������� 
//������ ������� ��������� ����� ����������, ������������� ��������� ����� �� �������������
{
	cout << "��������� ������� FOO" << endl;
	cout << "������: " <<  &value << endl;
}
MyClass Foo2()//������� � ����� ������������� �������� ���� MyClass 
{
	MyClass temp(2);//����� ����������� ������ MyClass ������� �������� ��������� ��� �������� �������
	cout << "��������� ������� FOO2" << endl;
	cout << "������: " << &temp << endl;
	return temp; //���������� ��������� ������
}

int main()
{
	setlocale(LC_ALL, "ru");

	MyClass a(10); //������� ������ ������ ����� �����������
	MyClass b(a); //������� ������ ����� ����������� �����������
}

