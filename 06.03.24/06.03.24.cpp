#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//1

	int A;
	int ans = 0;

	std::cout << "=======������ 1=======\n\n";
	std::cout << "��������� ����� ����� ����� �� � �� 500.\n\n";
	std::cout << "������� �����: ";
	std::cin >> A;

	for (int i = A; i < 501; i++)
	{
		ans += i;
	}

	std::cout << "\n" << ans;

	//2

	int x, y;

	std::cout << "\n\n=======������ 2=======\n\n";
	std::cout << "��������� �������� x � ������� y.\n\n";
	std::cout << "������� ������ ����� (��������): ";
	std::cin >> x;
	std::cout << "\n������� ������ ����� (�������): ";
	std::cin >> y;

	std::cout << "\n" << x << " � ������� " << y << " ����� ����� " << pow(x, y);

	//3

	float summa = 0, amount = 0;
	std::cout << "\n\n=======������ 3=======\n\n";
	std::cout << "������ ������� �������������� ���� ����� ����� �� 1 �� 1000.\n\n";

	for (int i = 1; i < 1001; i++)
	{
		amount++;
		summa += i;
	}

	std::cout << "������� �������������� ���� ����� ����� �� 1 �� 1000 ����� ����� " << summa / amount;

	//4

	int a;
	long long mul = 1;

	std::cout << "\n\n=======������ 4=======\n\n";
	std::cout << "������ ������������ ���� ����� ����� �� a �� 20.\n\n";
	std::cout << "������� ����� ����� a: ";
	std::cin >> a;

	if (a < 20)
	{
		for (int i = a; i <= 20; i++)
		{
			mul *= i;
		}
		std::cout << "\n������������ ���� ����� ����� �� " << a << " �� 20 ����� ����� " << mul;
	}
	else if (a <= 20)
	{
		mul = a;
		for (int i = a; i <= 20; i++)
		{
			mul *= i;
		}
		std::cout << "\n������������ ���� ����� ����� �� " << a << " �� 20 ����� ����� " << mul;
	}
	else
	{
		std::cout << "a ������ ���� ������ 20!";
	}

	//5

	int k;

	std::cout << "\n\n=======������ 5=======\n\n";
	std::cout << "������� ������� ��������� �� k, ��� k � ����� ��������.\n\n";
	std::cout << "������� ����� k: ";
	std::cin >> k;
	std::cout << "\n";
	for (int i = 0; i < 11; i++)
	{
		std::cout << k << " * " << i << " = " << k * i << "\n";
	}

	return 0;
}