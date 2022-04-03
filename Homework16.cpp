
#include <iostream>

int main()
{
	const int N = 5; // Здесь задаётся желаемый размер массива. Не понял как сделать ручной ввод, это ведь будет не константа... 
	int date;
	int sum = 0;
	std::cout << "Today's date = ";
	std::cin >> date;
	std::cout << "\n";
	int key = date % N;
	std::cout << "Line number = " << key;
	std::cout << "\n";
	std::cout << "\n";
	for (int j = 1; j < (N+1); j++)
	{
		if (key == j)
		{
			int array[N + 1];
			for (int i = 1; i < (N + 1); i++)
			{
				array[i] = i + j;
				std::cout << array[i];
				sum = sum + array[i];
			}
		}
		else
		{
			int array[N + 1];
			for (int i = 1; i < (N + 1); i++)
			{
				array[i] = i + j;
				std::cout << array[i];
			}
		}
		std::cout << "\n";
	}
	std::cout << "\n";
	std::cout << "Line amount = "<< sum; // Я так понял, что суммы по последней строке никогда не будет, так как будет делиться нацело...
	std::cout << "\n";
}