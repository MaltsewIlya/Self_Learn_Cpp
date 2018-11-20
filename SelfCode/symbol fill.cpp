#include<iostream>

int main()
{
	int height, weight;
	char symbol;

	std::cout << "Choise symbol... ";
	std::cin >> symbol;
	std::cout << "Height... ";
	std::cin >> height;
	std::cout << "Weight... ";
	std::cin >> weight;
	std::cout << std::endl;

	for (int h = 0; h < height; h++)
	{
		for (int w = 0; w < weight; w++)
		{
			std::cout << symbol;
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}
