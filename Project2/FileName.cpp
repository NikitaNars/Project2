#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");
	float num1;
	float num2;
	char symbol;
	float percent;

	std::cout << "Введите первое число:\n";
	std::cin >> num1;
	std::cout << "Введите оператор \'+\' \'-\' \'*\' \'/\' \'\%': \n";
	std::cin >> symbol;
	if (symbol != '%')
	{
		std::cout << "Введите второе число:\n";
		std::cin >> num2;
		if (symbol == '+')
		{
			std::cout << "Результат: " << num1 + num2;
		}
		else if (symbol == '-')
		{
			std::cout << "Результат: " << num1 - num2;
		}
		else if (symbol == '*')
		{
			std::cout << "Результат: " << num1 * num2;
		}
		else if (symbol == '/')
		{
			if (num2 == 0)
			{
				std::cout << "Ошибка на ноль делить нельзя!";
				return 0;
			}
			std::cout << "Результат: " << num1 / num2;
		}
		else if (symbol == '-')
		{
			std::cout << "Результат: " << num1 - num2;
		}
	}
	else if (symbol == '%')
	{
		std::cout << "Введите процент от числа:\n";
		std::cin >> percent;
		std::cout << "Результат: " << percent / 100 * num1;
	}
	return 0;
}