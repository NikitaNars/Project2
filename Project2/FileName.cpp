#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");
	float num1;
	float num2;
	char symbol;
	float percent;

	std::cout << "������� ������ �����:\n";
	std::cin >> num1;
	std::cout << "������� �������� \'+\' \'-\' \'*\' \'/\' \'\%': \n";
	std::cin >> symbol;
	if (symbol != '%')
	{
		std::cout << "������� ������ �����:\n";
		std::cin >> num2;
		if (symbol == '+')
		{
			std::cout << "���������: " << num1 + num2;
		}
		else if (symbol == '-')
		{
			std::cout << "���������: " << num1 - num2;
		}
		else if (symbol == '*')
		{
			std::cout << "���������: " << num1 * num2;
		}
		else if (symbol == '/')
		{
			if (num2 == 0)
			{
				std::cout << "������ �� ���� ������ ������!";
				return 0;
			}
			std::cout << "���������: " << num1 / num2;
		}
		else if (symbol == '-')
		{
			std::cout << "���������: " << num1 - num2;
		}
	}
	else if (symbol == '%')
	{
		std::cout << "������� ������� �� �����:\n";
		std::cin >> percent;
		std::cout << "���������: " << percent / 100 * num1;
	}
	return 0;
}