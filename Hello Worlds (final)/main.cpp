#include <iostream>>

int helloFunc(int p)
{
	return p;
}

// Prints Hello, World to your computer screen x number of times using a function
int main()
{
	int _numberOfHellos;

	std::cout << "How many times do you want to see \"Hello World\" printed to your computer screen?";
	std::cout << std::endl;

	std::cin >> _numberOfHellos;
	std::cout << std::endl;

	for (int i = 1; i <= helloFunc(_numberOfHellos); i++)
	{
		std::cout << "Hello, World!";
		std::cout << std::endl;
	}

	std::cout << std::endl;

	return 0;
}
