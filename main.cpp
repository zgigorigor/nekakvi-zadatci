#include <iostream>
#include <string>
#include <vector>

template <typename T>
T Sum(T a, T b)
	{
		return a + b;
	}

int main()
{
	int sumNumber = Sum(5, 7);
	float floatingSum = Sum(3.4f, 7.7f);

	std::cout << "Zbroj int-ova: " << sumNumber << std::endl;
	std::cout << "Zbroj float-ova: " << floatingSum << std::endl;

	std::string first = "Maja";
	std::string second = "dev";
	std::string stringSum = Sum(first, second);
	std::cout << "Zbroj stringova-ova: " << stringSum << std::endl;

	std::cin.get();
}