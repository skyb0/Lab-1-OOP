//5. �������� ���� � �����������.
//� ������� ������ ������� ���� : ������ � ������.
//��������� �����������, ����������, ������� ���� ������� ���� �� ��������� ���� �������, 
//���������� �����, ���������, ��������� ���� �����.
//������� ���� ������� ���� ����� ������ ��������� ���������� ���������, �� ���������.

#include <iostream>
#include "Priamokutnyk.cpp"

using namespace std;

void PrintInf(Priamokutnyk);

int main()
{
	system("chcp 1251");
	Priamokutnyk pr(5, 1);
	pr.PrintInf(pr);
	pr.SetShyr(17);
	pr.SetVysot(13);
	pr.PrintInf(pr);
	cout << "Plosha: " << pr.Plosha(pr) << endl;
}