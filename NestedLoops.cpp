#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	
	//Задача 1
	
	int sim = 0;
	int count = 0;
	std::cout << "Простые числа: \n\n";
	for (int i = 2; i < 100; i++) 
	{
		for (int j = 1; j < 100; j++) 
		{
			if (i % j == 0) 
			{
				count++;
			}
		}
		if (count < 3)
		{
			sim =+ i;
		std::cout << sim << " ";
		}
		count = 0;
	}
	std::cout << "\n";

	//Задача 2

	const int size = 7;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == j || i + j == size - 1 || j == size / 2 || i == size / 2)
				std::cout << "* ";
			else
				std::cout << "  ";
		}
		std::cout << "\n";
	}
	return 0;
}