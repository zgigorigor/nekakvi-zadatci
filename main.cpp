#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <time.h>

#define MATRIX_SIZE 100

/*

template <typename T>
T Sum(T a, T b)
	{
		return a + b;
	}

template <class _Ty>
class MyArray
{
public:
	_Ty table[];

	void push_back(_Ty element);
};

using namespace std;

*/

int main()
{
	/*
	
	int sumNumber = Sum(5, 7);
	float floatingSum = Sum(3.4f, 7.7f);

	std::cout << "Zbroj int-ova: " << sumNumber << std::endl;
	std::cout << "Zbroj float-ova: " << floatingSum << std::endl;

	std::string first = "Maja";
	std::string second = "dev";
	std::string stringSum = Sum(first, second);
	std::cout << "Zbroj stringova-ova: " << stringSum << std::endl;

	std::vector<int> vectorTemplate;
	std::vector<float> vectorTemplate;
	std::vector<std::string> vectorTemplate;
	

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
	std::cout << std::endl;
	
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
	std::cout << "\n" << std::endl;


	//MATRICE:

	int matrix[4][4];
	// 5xxx
	// x7xx
	// xxxx
	// xx9x
	matrix[0][0] = 5;
	matrix[1][1] = 7;
	matrix[3][2] = 9;
	

	int threeD[4][4][4];
	
	*/





	//Prvi zadatak:
		

	srand(time(NULL));

	int matrix[MATRIX_SIZE][MATRIX_SIZE];
	for (int x = 0; x < MATRIX_SIZE; ++x)
	{
		for (int y = 0; y < MATRIX_SIZE; ++y)
		{
			matrix[x][y] = (rand() % 200 + 1) - 100;
			std::cout << matrix[x][y] << "\t";
		}
		std::cout << std::endl;
	}

	int offset;
	int frontDiagonal = 0;
	int backDiagonal = 0;
	int currentOffsetX = 0;
	int currentOffsetY = 0;
	std::cout << "Offset size: ";
	std::cin >> offset;
	std::cout << std::endl;
	
	for (int y = currentOffsetY; y < offset + currentOffsetY; ++y)
	{
		if (offset + currentOffsetY > MATRIX_SIZE)
		{
			break;
		}

		for (int x = currentOffsetX, y = currentOffsetY; x < offset + currentOffsetX; ++x)
		{
			if (offset + currentOffsetX > MATRIX_SIZE)
			{
				break;
			}

			std::cout << matrix[x][y] << " ";
			if (x + 1 == offset + currentOffsetX)
			{
				currentOffsetX = x + 1;
			}
		}
		std::cout << std::endl;
		if (y + 1 == offset + currentOffsetY)
		{
			currentOffsetY = y + 1;
		}
	}
	
	//Naci najljepsu matricu
	
	
	
	system("PAUSE");


}
