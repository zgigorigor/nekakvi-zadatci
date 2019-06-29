#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>


//template <typename T>
//T Sum(T a, T b)
//	{
//		return a + b;
//	}
//
//template <class _Ty>
//class MyArray
//{
//public:
//	_Ty table[];
//
//	void push_back(_Ty element);
//};


int main()
{
	//int sumNumber = Sum(5, 7);
	//float floatingSum = Sum(3.4f, 7.7f);

	//std::cout << "Zbroj int-ova: " << sumNumber << std::endl;
	//std::cout << "Zbroj float-ova: " << floatingSum << std::endl;

	//std::string first = "Maja";
	//std::string second = "dev";
	//std::string stringSum = Sum(first, second);
	//std::cout << "Zbroj stringova-ova: " << stringSum << std::endl;

	//std::vector<int> vectorTemplate;
	//std::vector<float> vectorTemplate;
	//std::vector<std::string> vectorTemplate;


	//ALOCIRANJE MEMORIJE (2 nacina):
	// Prvi:
	int myNumberArray[4];
	myNumberArray[0] = 5;
	myNumberArray[1] = 7;
	myNumberArray[2] = 8;
	myNumberArray[3] = 2;
	//myNumberArray[4] = 10;

	for (size_t i = 0; i < 4; i++)
	{
		std::cout << myNumberArray[i] << std::endl;
	}
	
	//Drugi:
	int* myArray = (int*)malloc(4 * sizeof(int));
	myArray[0] = 9;
	myArray[1] = 8;
	myArray[2] = 7;
	myArray[3] = 6;

	for (size_t i = 0; i < 4; i++)
	{
		std::cout << myArray[i] << std::endl;
	}


	std::cin.get();
}