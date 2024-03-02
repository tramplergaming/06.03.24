#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//1

	int A;
	int ans = 0;

	std::cout << "=======ЗАДАЧА 1=======\n\n";
	std::cout << "Вычисляем сумму целых чисел от а до 500.\n\n";
	std::cout << "Введите число: ";
	std::cin >> A;

	for (int i = A; i < 501; i++)
	{
		ans += i;
	}

	std::cout << "\n" << ans;

	//2

	int x, y;

	std::cout << "\n\n=======ЗАДАЧА 2=======\n\n";
	std::cout << "Вычисляем значение x в степени y.\n\n";
	std::cout << "Введите первое число (значение): ";
	std::cin >> x;
	std::cout << "\nВведите второе число (степень): ";
	std::cin >> y;

	std::cout << "\n" << x << " в степени " << y << " будет равно " << pow(x, y);

	//3

	float summa = 0, amount = 0;
	std::cout << "\n\n=======ЗАДАЧА 3=======\n\n";
	std::cout << "Найдем среднее арифметическое всех целых чисел от 1 до 1000.\n\n";

	for (int i = 1; i < 1001; i++)
	{
		amount++;
		summa += i;
	}

	std::cout << "Среднее арифметическое всех целых чисел от 1 до 1000 будет равно " << summa / amount;

	//4

	int a;
	long long mul = 1;

	std::cout << "\n\n=======ЗАДАЧА 4=======\n\n";
	std::cout << "Найдем произведение всех целых чисел от a до 20.\n\n";
	std::cout << "Введите целое число a: ";
	std::cin >> a;

	if (a < 20)
	{
		for (int i = a; i <= 20; i++)
		{
			mul *= i;
		}
		std::cout << "\nПроизведение всех целых чисел от " << a << " до 20 будет равно " << mul;
	}
	else if (a <= 20)
	{
		mul = a;
		for (int i = a; i <= 20; i++)
		{
			mul *= i;
		}
		std::cout << "\nПроизведение всех целых чисел от " << a << " до 20 будет равно " << mul;
	}
	else
	{
		std::cout << "a должно быть меньше 20!";
	}

	//5

	int k;

	std::cout << "\n\n=======ЗАДАЧА 5=======\n\n";
	std::cout << "Выводим таблицу умножения на k, где k — номер варианта.\n\n";
	std::cout << "Введите число k: ";
	std::cin >> k;
	std::cout << "\n";
	for (int i = 0; i < 11; i++)
	{
		std::cout << k << " * " << i << " = " << k * i << "\n";
	}

	return 0;
}